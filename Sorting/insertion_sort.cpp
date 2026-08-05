#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element ";
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    cout << "Sorted array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}