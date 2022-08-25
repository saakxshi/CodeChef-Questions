#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n ;
        long long a= n/2;
        long long b= n/2;
        if(n%2!=0){
            a++;
        }
        cout<<2*a*b<<endl;
       
    } 

    return 0;
}
