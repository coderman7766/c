#include<iostream>
#include<conio.h>
#include<bits/stdc++.h> 
using namespace std;

bool check(string data){
	stack<char> s;
	char x;
	for(int i=0;i<data.length();i++){
		if(data[i]=='('||data[i]=='{'||data[i]=='['){
			s.push(data[i]);
			continue;
		}

		if(s.empty()){
			return false;
		}
		switch (data[i]) 
        { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']':
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        }

    } 
    return (s.empty());
}

int main(){
	string st="({{[]]}})";
	 if (check(st)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced";  
    getch();
}