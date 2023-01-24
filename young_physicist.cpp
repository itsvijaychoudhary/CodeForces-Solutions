#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[3*n];
int x,y,z;
x=0;y=0;z=0;
for (int i = 0; i < 3*n;)
{
    cin>>a[i]>>a[i+1]>>a[i+2];
x=x+a[i];
y=y+a[i+1];
z=z+a[i+2];
i=i+3;
}
// cout<<x<<" "<<y<<" "<<z;
if(x==0&&y==0&&z==0){
    cout<<"YES";
}else{
    cout<<"NO";
}









}