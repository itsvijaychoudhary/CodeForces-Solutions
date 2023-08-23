#include<iostream>
using namespace std;

int main(){
    int n, s;
    cin>>s>>n;
    pair<int, int> arr[1000];
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        if (s<=arr[i].first)
        {
            flag = 0;
            break;
        }
        s+=arr[i].second;
        
    }
    if (flag)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    } 
    return 0;
}
