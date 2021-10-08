#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        bool check = true;

        for(int i = 0; s[i] != '\0'; i++){
            if( s[i] == 'a'){
                if(s[i+1] == '\0'){
                    check = true;
                } else if( s.substr(i+1,2) == "bb" ){
                    check = true;
                } else {
                    check = false;
                    break;
                }
            } else if (s.substr(i,2) == "bb"){
                if(s[i+2] == '\0' || s[i+2] == 'a'){
                    check = true;
                } else {
                    check = false;
                    break;
                }
            }
        }

        if(s[0] == 'b'){
            check = false;
        }

        if(check){
            cout<<"true";
        } else {
            cout<<"false";
        }

        cout<<endl;
    }

    return 0;
}