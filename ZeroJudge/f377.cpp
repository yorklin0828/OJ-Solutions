// f377. 運算式轉換

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int precedence(char c){
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return 0;
}

bool isOperator(char c){
    if(c == '^' || c == '*' || c == '/' || c == '+' || c == '-') return true;
    return false;
}

bool isAlphabet(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
    return false;
}

string infixToPostfix(const string& str){
    string postfix;
    stack<int> s;
    int len = str.size();
    
    for(int i = 0; i < len; i++){
        if(isAlphabet(str[i])){
            postfix += str[i];
        }else if(str[i] == '('){
            s.push(str[i]);
        }else if(str[i] == ')'){
            while(!s.empty() && s.top() != '('){
                 postfix += s.top();
                 s.pop();   
            }
            if(!s.empty()){
                s.pop();
            }
        }else if(isOperator(str[i])){
            while(!s.empty() && (precedence(str[i]) <= precedence(s.top()))){
                postfix += s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
}



int main(){
    string str;
    while(getline(cin, str)){
        string postfix = infixToPostfix((str));
        int len = postfix.size();
        for(int i = 0; i < len; i++){
            cout << postfix[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
