/* Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
*/
#include<iostream>
using namespace std;
int main()
{
    int MAX_SIZE=100;
    int userSize;
    cin>>userSize;
    int arr[userSize];
    // input the values.
    for (size_t i = 0; i < userSize; i++)
    {
         cin>>arr[i];
    }
    cout<<"now insert the search element";
    int elementToBeSearched,index=-1;
    cin>>elementToBeSearched;
    for (size_t i = 0; i < userSize; i++)
    {
        if (elementToBeSearched == arr[i])
        {
            cout<<"element found in position :"<<i+1;
            index = i+1;
            break;
        }
        
    }
    if (index<0)
    {
        cout<<index;
    }
    
    return 0;
}