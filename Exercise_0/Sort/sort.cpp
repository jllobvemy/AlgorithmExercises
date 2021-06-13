#include"myutils.hpp"

template<typename T, std::size_t SIZE>
void QuickSort(std::array<T, SIZE>& arr);

template<typename T, std::size_t SIZE>
void MergeSort(std::array<T, SIZE>& arr);

int main(int argc, char const *argv[]) 
{
    auto arr1 = CreateRandomArray<int, 20>();
    cout << "===========================" << endl;
    cout << "First array for MergeSort: " << endl;
    PrintArray(arr1);
    MergeSort(arr1);
    cout << "After MergeSort: " << endl;
    PrintArray(arr1);
    cout << "===========================" << endl;
    
    cout << endl << endl;

    auto arr2 = CreateRandomArray<int, 20>();
    cout << "===========================" << endl;
    cout << "Second array for QuickSort: " << endl;
    PrintArray(arr2);
    cout << "After QuickSort: " << endl;
    QuickSort(arr2);
    // InsertSort(arr2);
    PrintArray(arr2);
    cout << "===========================" << endl;


    return 0;
}

// template<typename T>
// void Swap(T& a, T&b)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }


template<typename T, std::size_t SIZE>
void QuickSort(std::array<T, SIZE>& arr, int left, int right)
{
    if (left < right)
    {
        int j = Partition(arr, left, right);
        QuickSort(arr, left, j - 1);
        QuickSort(arr, j + 1, right);
    }
}

template<typename T, std::size_t SIZE>
void QuickSort(std::array<T, SIZE>& arr)
{
    QuickSort(arr, 0, SIZE - 1);
}



template<typename T, std::size_t SIZE>
void Merge(std::array<T, SIZE>& arr, int left, int mid, int right) 
{
    std::vector<T> temp;
    int i = left, j = mid + 1;
    while ((i <= mid) && (j <= right))
    {
        if (arr.at(i) <= arr.at(j))
        {
            temp.push_back(arr.at(i++));
        }
        else
        {
            temp.push_back(arr.at(j++));
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr.at(i++));
    }
    while (j <= right)
    {
        temp.push_back(arr.at(j++));
    }
    for (int i = 0, k = left; k <= right;)
    {
        arr.at(k++) = temp.at(i++);
    }
}



template<typename T, std::size_t SIZE>
void MergeSort(std::array<T, SIZE>& arr, std::size_t left, std::size_t right) 
{
    if (left < right) 
    {
        std::size_t mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}

template<typename T, std::size_t SIZE>
void MergeSort(std::array<T, SIZE>& arr)
{
    MergeSort(arr, 0, SIZE - 1);
}
