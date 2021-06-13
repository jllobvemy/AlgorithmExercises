/* 
* ==========================================
* (c) Copyright by Jllobvemy.
* Introduction: Utilities for Algorithm
* Date:  Jun 2021
* Github: github.com/jllobvemy
* Email: b19031327@njupt.edu.cn
* ==========================================
*/
#pragma once
#if (__cplusplus < 201703L && _MSVC_LANG < 201703L)
#error("Error: C++17 or later required.")
// -std=c++17 for g++ 
// set(CMAKE_CXX_STANDRED 17) for cmake
#endif
#include <iostream>
#include <array>
#include <random>
#include <cmath>
#include <string>
#include <cmath>
#include <cstring>
#include <initializer_list>
#include <utility>
#include <iomanip>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::pair;
using std::size_t;
using std::array;
using ushort = unsigned short;

template<typename T>
void Swap(T& a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T = int>
class Matrix 
{
public:
    Matrix(std::initializer_list<std::initializer_list<T>> m)
    {
        m_.resize(m.size());
        auto ite = m.begin();
        for (auto &row : m_)
        {
            row = *ite;
            ite++;
        }
    }
    Matrix(std::initializer_list<T> s)
    {
        auto m = Matrix<decltype(s)>(s);
    }
    Matrix(std::size_t a, std::size_t b, T init = 0) 
    {
        m_.resize(a);
        for (auto& row : m_) 
        {
            row.resize(b);
            for (auto& elem: row)
            {
                elem = init;
            }
        }
    }

    auto& operator[](std::size_t index) const
    {
        return m_[index];
    }
    auto& operator[](std::size_t index)
    {
        return m_[index];
    }

    void PrettyPrint(std::size_t NUMBERLENGTH = 6) 
    {
        std::size_t length = m_.size() * NUMBERLENGTH + 1;
        cout << ' ';
        for (auto i = 0; i < length; i++)
        {
            cout << '-';
        }
        cout << endl;
        for (const auto& i : m_) 
        {
            cout << "| ";
            for (const auto& j : i)
            {
                cout << std::left << std::setw(NUMBERLENGTH) << j;
            }
            cout << '|';
            cout << endl;
        }
        cout << ' ';
        for (auto i = 0; i < length; i++)
        {
            cout << '-';
        }
        cout << endl;
    }
private:
    vector<vector<T>> m_;
};

template<typename T, std::size_t SIZE>
std::array<T, SIZE> CreateRandomArray()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    // Generate random numbers between -1000 and 1000.
    std::uniform_int_distribution distrib(-1000, 1000);

    std::array<T, SIZE> arr;
    for (int i = 0; i < SIZE; i++)
    {
        arr.at(i) = distrib(gen);
    }
    return arr;
}


template<typename T, std::size_t SIZE>
void PrintArray(const std::array<T, SIZE>& arr)
{
    cout << '[';
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr.at(i);
        if (i != SIZE - 1) 
        {
            cout << ", ";
        }
    }
    cout << ']';
    cout << endl;
}
template<typename T>
void PrintVector(const std::vector<T>& arr)
{
    size_t SIZE = arr.size();
    cout << '[';
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr.at(i);
        if (i != SIZE - 1) 
        {
            cout << ", ";
        }
    }
    cout << ']';
    cout << endl;
}

template<typename T, std::size_t SIZE>
int Partition(std::array<T, SIZE>& arr, int left, int right) 
{
    int i = left, j = right + 1;
    do {
        do 
        {
            i++;
        }while(i < j && arr.at(i) < arr.at(left));
        do 
        {
            j--;
        }while(i <= j && arr.at(j) > arr.at(left));
        if (i < j) 
        {
            Swap(arr.at(i), arr.at(j));
        }
    }while (i < j);
    Swap(arr.at(left), arr.at(j));
    return j;
}

template<typename T, std::size_t SIZE>
void InsertSort(std::array<T, SIZE>& arr, std::size_t left, std::size_t right)
{
    T key;
    int j;
    for (int i = left + 1; i < right; i++)
    {
        key = arr.at(i);
        j = i - 1;
        while (j >= 0 && arr.at(j) > key)
        {
            arr.at(j + 1) = arr.at(j);
            j = j - 1;
        }
        arr.at(j + 1) = key;
    }
}

template<typename T, std::size_t SIZE>
void InsertSort(std::array<T, SIZE>& arr)
{
    InsertSort(arr, 0, SIZE);
}

int Ceil(int a, int b)
{
    return static_cast<int>(ceil(a * 1.0 / b));
}