#include<iostream>


void remove(int (&arr)[50], int& size, int position)
{
    if (position <= 0 || position > size)
    {
        std::cout<<"Please enter a valid position";
    }
    else{
        for (int i = position - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

void insert(int (&arr)[50], int &size, int value, int position)
{
    if (size >= 50)
    {
        std::cout<<"The array is full";
    }
    else if (position > size || position <= 0)
    {
        std::cout<<"Invalid position" ;
    }
    else
    {
        for (int i = size - 1; i >= position - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[position - 1] = value;
        size--;
    }
}

int main()
{
    int arr2d[10][10] = {{0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {0, 1, 2,3, 4, 5, 6, 7, 8, 9},
                        {123, 1, 2,3, 4, 5, 6, 7, 8, 11}
                                        };
    int arr[50] = {23, 22, 43, 54, 23, 45, 23, 12};//23,22,43,54,23,45,23,12
    int size = 8;

    insert(arr, size, 1, 1);
    /*for (int v : arr)
    {
        std::cout<<v<<"\n";
    }*/
    for (int i = 0; i < 10; i++)
    {
        //std::cout<<arr2d[i][i]<<"\n";
        //majorDiag[i] = arr2d[i][i];
        std::cout<<arr2d[i][9-i]<<",";
    }

    return 0;
}
