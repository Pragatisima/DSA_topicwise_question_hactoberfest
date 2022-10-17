#include<iostream>
using namespace std;
int setbit(int n,int pos){
    return(n|(1<<pos));
}
int main()
{
    cout<<setbit(7,3)<<endl;
}