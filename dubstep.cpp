#include<iostream>
using namespace std;

int main(){
    string s;
    int flag = 1;
    cin>>s;
    int n = s.size();
    int check=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i+=2;
            if (!flag)
            {
                if(check==0){
                cout<<" ";
check=1;
                }

            }
            continue;
        }else
        {
        flag = 0;
        cout<<s[i];
        check=0;
        }
    }
    // return 0;
}