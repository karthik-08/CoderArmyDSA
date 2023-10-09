/*Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
*/
#include<iostream>
using namespace std;
int main()
{
    char arr[30];
    arr[0] ='a';
    for (size_t i = 1; i < 26; i++)
    {
        arr[i] = arr[i-1]+1;
    }
    for (size_t i = 0; i < 30; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}