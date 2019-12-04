#include<conio.h>
#include<iostream>
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

void infixToPostfix(string s){
	stack<char> st;
	int len=s.length();
	string s2;
	for(int i=0;i<len;i++){
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
			s2+=s[i];
		}
		else if(s[i]=='('){
			st.push('(');
		}
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				char c=st.top();
				st.pop();
				s2+=c;
			}
			if(st.top()=='('){
				st.pop();
			}
		}
		else{
			while(!st.empty()&& prec(s[i])<=prec(st.top())){
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

	cout<<"The postfix expression:"<<s2;
	getch();
}

int main(){
	string exp;
	cout<<"Enter infix expression";
	cin>>exp;
	infixToPostfix(exp);
}
