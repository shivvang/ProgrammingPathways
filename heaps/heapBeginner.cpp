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

    void insert(int value)
    {
        // step -1
        size = size + 1;

        int index = size;

        arr[index] = value;

        // step-2
        while (index > 1)
        {

            int parentIndex = index / 2;

            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);

                index = parentIndex;
            }

            else
            {
                break;
            }
        }
    }
};

int delete()
{
    int ans = arr[1];

    // replacing the very first element with last element  and deleting last;

    int arr[1] = arr[size];

    size--;

    // finding the appropriate position for newly replaaced value of root

    int index = 1;

    while (index < size)
    {

        int left = 2 * index;
        int right = 2 * index + 1;
        int largest = index;

        if (left < size && arr[larget] < arr[left])
        {
            largest = left;
        }

        if (right < size && arr[largest] < arr[right])
        {
            largest = right;
        }

        // if after doing all this largest == index ,meaning current element is greater than left and right child
        if (largest == index)
        {
            break;
        }
        else
        {
            swap(arr[index], arr[largest]);
            index = largest;
        }
    }

    return ans;
}

int main()
{
    heap h;

    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);

    h.size = 6;
    cout << "printing heap" << endl;

    for (int i = 0; i < h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    return 0;
}