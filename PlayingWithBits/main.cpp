#include <iostream>

using namespace std;
int countDigits(int j){
  int c=0;
  while (j>0){
    j=j/10;
    c++;
  }
  return c;
}
int main()
{
    int testCases;
    cin>>testCases;
    int lower[testCases],upper[testCases];
    for(int i=0;i<testCases;i++){
        cin>>lower[i]>>upper[i];
    }
    for(int i=0;i<testCases;i++){
        int a=lower[i];
        int b=upper[i];
        int c=0,mask;
        for(int j=a;j<=b;j++){
            int num=j;
            while(num>0){
                int r=num&1;
                if(r==1) c++;
                num=num>>1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
