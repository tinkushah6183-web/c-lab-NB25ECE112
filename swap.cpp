#include <iostream>
using namespace std;
void swapRef(int a,int b){int t=a;a=b;b=t;}
void swapPtr(int*a,int*b){int t=*a;*a=*b;*b=t;}
int main(){
    int X=10,Y=20;
    swapRef(X,Y);
    cout<<"AfterswapRef:X="<<X<< "Y= "<<Y<<endl;
    swapPtr(&X,&Y);
     cout<<"AfterswapPtr:X="<<X<< "Y= "<<Y<<endl;
     int& alias=X;
     alias=99;
     cout<<"X via alias="<<X<<endl;
     return 0;