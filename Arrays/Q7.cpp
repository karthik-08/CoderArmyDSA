/* Find the second largest element in an array of unique elements of size n. Where n>3.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int userSize;
    cin>>userSize;
    for (size_t i = 0; i <userSize; i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];
    int max_2 = arr[1];
    for (size_t i = 1; i < userSize; i++)
    {
        if (arr[i]>max)
        {
            max_2=max;
            max=arr[i];
        }
        
    }
    
    cout<<"the 2nd largest number in array is " << max_2;
    return 0;
}