#include<iostream>
using namespace std;

int main(){
    int i, j, A[6][6],r, c;
    for (i = 1; i < 6; i++){
      for (j = 1; j < 6; j++){
        cin>>A[i][j];
        if (A[i][j]==1)
        {
            r=abs(3-i);
            c=abs(3-j);
            cout<<r+c<<endl;
        }
      }
    }
    return 0;
}