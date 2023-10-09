// Find the maximum of all the elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i <size; i++)
    {
        cin>>arr[i];
    }

    int ans = INT32_MIN;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i]>ans)
        {
            ans=arr[i];
        }
        
    }
    
    cout<<"the largest number in array is " << ans;
    return 0;
}