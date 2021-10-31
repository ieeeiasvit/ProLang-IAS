#include<iostream>
#include<string>
#include<stack>

using namespace std;

string prefix(string s);
int check(char c);

int main(){

    string inputvalue;
    cout<<"ENTER THE INFIX EXPRESSION"<<endl;
    cin>>inputvalue;
    cout<<"THE REQUIRED PREFIX EXPRESSION IS : "<<prefix(inputvalue)<<endl;

    
return 0;
}

int check(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
} 

string prefix(string s){
    
    stack<char> mystack;
    string result;

    string temp;
    for (int i=s.length()-1; i>=0; i--){
      temp+=s[i];
     }

    for (int i = 0; i < temp.length(); i++)
    {
        if((temp[i]>='a' && temp[i]<='z') || (temp[i]>='A' && temp[i]<='Z'))
        {
            result+=temp[i];
        }
        else if(temp[i]==')'){
            mystack.push(temp[i]);
        }
        else if(temp[i]=='('){
            while (!mystack.empty() && mystack.top()!= ')')
            {
                result+=mystack.top();
                mystack.pop();
            }
            if(!mystack.empty()){
                mystack.pop();
            }
            
        }
        else{
            while(!mystack.empty() && check(mystack.top())>=check(temp[i])){
                result+=mystack.top();
                mystack.pop();
            }
            mystack.push(temp[i]);
        }
    }
    while(!mystack.empty()){
        result+=mystack.top();
        mystack.pop();
    }
    string finalresult;
    for (int i=result.length()-1; i>=0; i--){
      finalresult+=result[i];
     }

    return finalresult;

}
