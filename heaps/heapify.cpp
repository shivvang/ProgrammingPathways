#include <iostream>
using namespace std;

class heap
{
public:
    int arr[101];
    int size;

    heap()
    {
        size = 0;
    }
};

void heapify(int arr[], int n, int index)
{

    int left = 2 * index;
    int right = 2 * index + 1;
    int largest = index;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

void heapSort(int arr[], int n)
{
    int index = n;
    while (n != 1)
    {
        // swapping first and last element
        swap(arr[1], arr[index]);
        index--;
        n--;
        heapify(arr, n, 1);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{

    int arr[] = {-1, 12, 15, 13, 11, 14};
    int n = 5;
    buildHeap(arr, n);

    cout << "printing the heap" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);

    cout << "printing the heap" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}