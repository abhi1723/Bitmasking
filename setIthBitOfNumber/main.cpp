#include <iostream>
using namespace std;
int setIthBitOfNumber(int n,int i){
int m=1<<i;
int an=(n|m);
return an;
}
int main()
{
    int n,i;
    cin>>n>>i;
    int result=setIthBitOfNumber(n,i);
    cout<<result;
    return 0;
}
