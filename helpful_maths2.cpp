#include<iostream>
using namespace std;
#include<string>

int main(){
string s;

cin>>s;
int n=s.size();
int a,b,c;
a=0;b=0;c=0;
for (int i = 0; i < s.size(); i++)
{
   if(s[i]=='1'){
       a=a+1;
   }else if(s[i]=='2'){
       b=b+1;
   }else if(s[i]=='3'){
       c=c+1;
   }
}
int d=0;
for (int i = 0; i < n; i++)
{
    if(d<a){
   s[i]='1';
   d++;
   i++;
//    cout<<"The Value ofd "<<d;
    }else if(d==a){

s[i]='1';
break;
    }
}
d=0;
for (int i = 2*a; i < n; i++)
{
    if(d<b){
   s[i]='2';
   d++;
   i++;
    }else if(d==b){
s[i]='2';
break;
    }
}
d=0;
for (int i = 2*a+2*b; i < n; i++)
{
    if(d<c){
   s[i]='3';
   d++;
   i++;
    }else if(d==b){

s[i]='3';
break;
    }
}
cout<<s;
}