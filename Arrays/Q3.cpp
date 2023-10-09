/* Take 20 elements from user input and find its sum with the help of an array.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int size = sizeof(arr)/sizeof(arr[0]),sum = 0;
    for (size_t i = 0; i <size; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"the sum of all 20 elements taken from the user is : "<<sum;
    return 0;
}