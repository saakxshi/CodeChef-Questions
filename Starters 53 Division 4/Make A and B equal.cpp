#include <iostream>
using namespace std;


int main()
{
    int t,n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n ;
        int a[n] , b[n] ;
        long long asum=0,bsum=0;
        for(int k=0;k<n;k++)
        {
            cin>> a[k];
        }
        for(int l=0;l<n;l++)
        {
            cin>> b[l];
        }
        for(int m=0;m<n;m++){
             if(a[m]<=b[m]){
                 asum+= abs(a[m]-b[m]);
             }
             else{
                 bsum+=abs(a[m]-b[m]);
             }
        }
        if(asum==bsum){
            cout<<asum<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    
        
    }
  
    
    return 0;
}

// EXPLANATION:
// First, note that each move increases the sum of both AA and BB by exactly one. So, if initially AA and BB have different sums, they can never be made equal (since they must have the same sum when they are equal).

// Now, assume sum(A) = sum(B)sum(A)=sum(B). Let’s look at a specific index ii (1 \leq i \leq N1≤i≤N).

// If A_i = B_iA 
// i
// ​
//  =B 
// i
// ​
//  , we don’t need to do anything
// If A_i \lt B_iA 
// i
// ​
//  <B 
// i
// ​
//  , we need to use B_i - A_iB 
// i
// ​
//  −A 
// i
// ​
//   operations on A_iA 
// i
// ​
//   to attain equality at this index.
// If A_i \gt B_iA 
// i
// ​
//  >B 
// i
// ​
//  , we need to use A_i - B_iA 
// i
// ​
//  −B 
// i
// ​
//   operations on B_iB 
// i
// ​
//   to attain equality at this index.
// Let x = \sum_{i=1}^N \max(0, B_i - A_i)x=∑ 
// i=1
// N
// ​
//  max(0,B 
// i
// ​
//  −A 
// i
// ​
//  ). As noted from above, xx is the minimum number of operations we need to perform on indices of AA.
// Similarly, let y = \sum_{i=1}^N \max(0, A_i - B_i)y=∑ 
// i=1
// N
// ​
//  max(0,A 
// i
// ​
//  −B 
// i
// ​
//  ) be the minimum number of operations we need to perform on BB.

// Clearly, the answer is at least \max(x, y)max(x,y).

// In fact, given the condition that sum(A) = sum(B)sum(A)=sum(B), we have x = yx=y, and this is exactly the answer.
