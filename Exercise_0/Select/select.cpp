#include"myutils.hpp"

template<typename T, std::size_t SIZE>
int Select(std::array<T, SIZE>& arr, std::size_t k);

int main(int argc, char const *argv[])
{
    auto arr = CreateRandomArray<int, 20>();
    cout << "Random array: " << endl;
    PrintArray(arr);
    cout << "7th Min: ";
    cout << Select(arr, 7) << endl;
    cout << "Sorted: " << endl;;
    InsertSort(arr);
    PrintArray(arr);
    return 0;
}


template<typename T, std::size_t SIZE>
int Select(std::array<T, SIZE>& arr, std::size_t k, std::size_t left, std::size_t right, std::size_t r)
{
    auto n = right - left + 1;
    if (n <= r)
    {
        InsertSort(arr, left, right);
        return left + k - 1;
    }
    for (int i = 1; i <= n/r; i++)
    {
        InsertSort(arr, left + (i - 1) * r, left + i * r - 1);
        Swap(arr.at(left + i - 1), arr.at(left + (i - 1) * r + Ceil(r, 2) - 1));
    }
    int j = Select(arr, Ceil(n / 2, 2), left, left + (n / r) - 1, r);
    Swap(arr.at(left), arr.at(j));
    j = Partition(arr, left, right);
    if (k == j - left + 1) return j;
    else if (k < j - left + 1) return Select(arr, k, left, j - 1, r);
    else return Select(arr, k - (j - left + 1), j + 1, right, r);
}

template<typename T, std::size_t SIZE>
int Select(std::array<T, SIZE>& arr, std::size_t k)
{
    if (k > SIZE) return -1;
    int j = Select(arr, k, 0, SIZE - 1, 5);
    return arr.at(j);

}