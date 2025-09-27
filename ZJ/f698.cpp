// f698. 後序運算式求值

#include<iostream>
#include<stack>
using namespace std;

bool isOperator(string str){
    if(str == "+" || str == "-" || str == "*" || str == "/") return true;
    return false;
}

void calculate(stack<int>& s, string str){
    int right = s.top();
    s.pop();
    int left = s.top();
    s.pop();
    if(str == "+"){
        s.push(left + right);
    }else if(str == "-"){
        s.push(left - right);
    }else if(str == "*"){
        s.push(left * right);
    }else if(str == "/" && right != 0){
        s.push(left / right);
    }
}

int main(){
    string str;
    stack<int> s;
    
    while(cin >> str){
        if(!isOperator(str)){
            s.push(stoi(str));
        }else{
            calculate(s, str);
        }
    }
    cout << s.top();
    return 0;
}
