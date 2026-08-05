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
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int c = 0;
        int k = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < min)
            {
                min = arr[j];
                k = j;
            }
        }
        c = arr[i];
        arr[i] = min;
        arr[k] = c;
    }
    cout << "Sorted array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}