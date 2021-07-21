#include <iostream>

void rotate(int** ptr, int size)
{
    int c = size;
    int r = 0;
    for(int i = 0; i < size/2; ++i)
    {
        for(int j = i; j < c-i-1; j++)
        {
            std::swap(ptr[i][j], ptr[c-1-j][i]);
            std::swap(ptr[c-1-j][i], ptr[c-1-i][c-1-j]);
            std::swap(ptr[c-1-i][c-1-j], ptr[j][c-1-i]);
        }
        
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << std::endl;
        for(int j = 0; j < size; ++j)
        {
            std::cout << ptr[i][j]<< "   ";   
        }
       std::cout<<std::endl;
    }
}

int main()
{
    int k =1;
    const int size = 6;
    int**mptr = new int* [size];
    for(int i = 0; i < size; ++i)
    {
        mptr[i] = new int[size];
        for(int j = 0; j < size; ++j)
        {
            mptr[i][j] = k;
            ++k;
            std::cout << mptr[i][j] << std::endl;
        }
    }
    rotate(mptr, size);
    for(int i = 0; i < size; ++i)
    {
        delete mptr[i];
    }
    delete [] mptr;
    return 0;
}