#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input(){
    while (true)

    {
        cout << "Masukan Panjang element array : ";
        cin >> n;
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";

        }
    }
    cout << "\n----------------" << endl;
    cout << "\nIput isi elemen" << endl;
    cout << "\n---------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];

    }
    
}

void mergeSort(int low, int high)
{
    if (low >= high)
    {
        return; 
    }
    
    int mid = (low,mid) / 2;
    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }
}