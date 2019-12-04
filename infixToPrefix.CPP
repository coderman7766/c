#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

int prec(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='*'||c=='/'){
		return 2;
	}
	else if(c=='+'||c=='-'){
		return 1;
	}
	else{
		return -1;
	}
}

void infixToPrefix(string s){
	//reverseStr(s);
	stack<char> st;
	reverse(s.begin(), s.end()); 
	int l=s.length();
	string s2;
	for(int i=0;i<l;i++){
		if(s[i]=='('){
			s[i]=')';
			i++;
		}
		else if(s[i]==')'){
			s[i]='(';
			i++;
		}
	}
	for(int i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
			s2+=s[i];
		}
		else if(s[i]=='('){
			st.push('(');
		}
		else if(s[i]==')'){
			while(!st.empty()&&st.top()!='('){
				char c=st.top();
				st.pop();
				s2+=c;
			}
			if(st.top()=='('){
				st.pop();
			}
		}
		else{
			while(!st.empty()&&prec(s[i])<=prec(st.top())){
				char c=st.top();
				st.pop();
				s2+=c;	
			}
			st.push(s[i]);
		}

	}
		while(!st.empty()){
				char c=st.top();
				st.pop();
				s2+=c;
	}
	reverse(s2.begin(), s2.end());


	cout<<"The Prefix expression"<<s2;
	getch();
}

int main(){
	string infix;
	cout<<"Enter infx Expression";
	cin>>infix;
	infixToPrefix(infix);
}