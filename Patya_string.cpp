#include<iostream>
using namespace std;

// main learning is how to transform uppercase to lower case and vice versa //

void compare(string str1, string str2){
    cin>>str1;
    cin>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if (str1 == str2)
    {
        cout<<"0"<<endl;
    }
    else if (str1 < str2)
    {
        cout<<"-1"<<endl;
    }
    else if(str1 > str2)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<" "<<endl;
    };


};

int main(){
    string str1;
    string str2;
    compare(str1, str2);
    
    return 0;
}