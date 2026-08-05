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
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            int c = 0;

            if (arr[j] > arr[j + 1])
            {
                c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
    cout << "Sorted array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}