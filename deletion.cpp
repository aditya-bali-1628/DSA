#include <iostream>
using namespace std;
// travarsal function 
void displayarr(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int deletionindx(int arr[], int size, int capicity, int index)
{
    for (int i = index; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[50] = {1, 2, 3, 4, 5};
    int size = 4;
    displayarr(arr, size);
    int capicity = 100;
    int index;
    cout << "Enter the index number(deletion number) :";
    cin >> index;
    deletionindx(arr, size, capicity, index);
    size = size - 1;
    displayarr(arr, size);
    return 0;
}