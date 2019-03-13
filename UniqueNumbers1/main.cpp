#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int p=A[0]^A[1];
    for(int i=2;i<n;i++)
        p=p^A[i];
    cout << p;
    return 0;
}
