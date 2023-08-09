#include <bits/stdc++.h>
using namespace std;
void oddAppearing(int arr[], int n)
{
    int x= arr[0];
    for(int i =1;i<n;i++)
    x=x^arr[i];
    int k = (x & (~(x-1)));
    int res1 = 0;
    int res2 =0;
    for(int i =0; i<n;i++)
    {
        if((arr[i]&k)!=0)
        {
        res1=res1^arr[i];
        }
        else
        {
            res2=res2^arr[i];
        }
    }
    cout<<"The two odd elements are "<<res1<<" "<<res2;
}
    
int main() 
{
    int arr[]= {4,2,4,5,2,3,3,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    oddAppearing(arr,arr_size);
    return 0; 
}