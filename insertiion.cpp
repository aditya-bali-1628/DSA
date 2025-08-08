#include <iostream>
using namespace std;
// code of travasral of array
// dispplay function
void displayarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // print the elements of array
        cout << arr[i] << " ";
    }
    cout << endl;
}
// function  to create for insert the value of array
int insertioninindex(int arr[], int size, int element, int index, int capicity)
{
    // check the array of true of not
    if (size >= capicity || index < 0 || index >= capicity)
    {
        return -1;
    }
    // using for loop for insert the arry of element
    for (int i = size - 1; i >= index; i--)
    {
        // add a space for one more element and adjust the right side of array
        arr[i + 1] = arr[i];
    }
    // insert the element of array in index number
    arr[index] = element;
    // then return  1;
    return 1;
}
int main()
{
    // create array
    int arr[100] = {1, 2, 3, 4, 5};
    // size of array
    int size = 4;
    // insert the element of array
    int element;;
    cout << "insert the one element (enter number) :";
    cin >> element;
    // index number of array
    int index;
    cout << "Enter the index number :";
    cin >> index;
    // display the function
    displayarr(arr, size);
    // display the insurtion  function
    insertioninindex(arr, size, element, index, 100);
    // add a extraa size of array
    size = size + 1;
    // display final array
    displayarr(arr, size);
    return 0;
}