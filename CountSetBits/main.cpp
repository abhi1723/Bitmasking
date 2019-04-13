#include <iostream>

using namespace std;
int countNoOfDigits(int num){
int c=0;
while(num>0){
    num/=10;
    c++;
}
return c;
}
int main()
{
    int testCases;
    cin>>testCases;
    int A[testCases];
    for(int i=0;i<testCases;i++)
        cin>>A[i];
    for(int i=0;i<testCases;i++){
        int num=A[i];
        int c=0;
        while(num>0){
            if((num&1)){
                c++;
            }
            num=num>>1;
        }
        cout<<c<<endl;
        //int noOfDigits=countNoOfDigits(num);
        //int mask=1<<noOfDigits;
    }
    return 0;
}
