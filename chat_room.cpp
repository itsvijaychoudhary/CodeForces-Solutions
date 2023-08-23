#include<iostream>
using namespace std;

int main(){
    string s, k="hello";
    cin>>s;
    int j=0, count=0;
    for(int i=0; i<s.length();i++){
        if(s[i]==k[j]){
            j++;
            count++;
        }
    }
    if(count==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}