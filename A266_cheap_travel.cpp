#include<iostream>
using namespace std;

int main(){
    int a, b, n, m;
    cin>>n>>m>>a>>b;
    if (m*a<=b)
    {
        cout<<n*a<<endl;
    }else{
        cout<<(n/m)*b+ min((n%m) * a, b)<<endl;
    }

    return 0;
}