#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s); // will not terminate over comma and space //
    set<char> k;    // will store all the elements of alphabet only //
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))  // isaplha will take only alphabets not comma and {, } //
        {
            k.insert(s[i]);
        }
        
    }
    cout<<k.size();
    return 0;
}