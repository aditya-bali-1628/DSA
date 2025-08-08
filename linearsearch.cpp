#include <iostream>
using namespace std;
//create function to search number in array (travarsal method)
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element) //use condition for found element of not
        {
            return i; //element is found then return i
        }
        
    }
    return -1; //element is not found return -1
}

int main()
{  // create array
    int arr[50] = {1, 3, 4, 5, 6, 7, 12, 34, 44, 55};
    //find size of the array
    int size = sizeof(arr) / sizeof(int);
    int element; //create new variable for find element 
    cout << "Enter the element (for search) :";
    cin >> element;
    int searchkindex = linearsearch(arr, size, element); //calling function and pass argumment
    if (searchkindex != -1) //write condition
    {
        cout << "found is index number " << searchkindex << " element is : " << element;
    }
    else
    {
        cout << "elment is not found " << element;
    }
    return 0;
}