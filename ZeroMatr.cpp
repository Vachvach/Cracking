#include <iostream>
#include <vector>
#include <utility>


int ZeroM(int** arr, int size)
{
    std::vector<std::pair<int,int>> v;
    for(int i = 0; i < size;++i)
    {
        for(int j = 0; j < size; ++j)
        {
            if(arr[i][j] == 0)
            {
                v.push_back(std::make_pair(i,j));
            }
        }
    }
    for(int k=0;k < v.size();++k)
    {
        for(int h=0;h < size;++h)
        {
            arr[v[k].first][h] = 0;
            arr[h][v[k].second] = 0;
        }
    }
    
    for(int i = 0; i < size; ++i)
    {
        std::cout << std::endl;
        for(int j = 0; j < size; ++j)
        {
            std::cout << arr[i][j]<< "   ";   
        }
       std::cout<<std::endl;
    }
    return 0;
}

int main()
{
int k =0;
    const int size = 3;
    int**mptr = new int* [size];
    for(int i = 0; i < size; ++i)
    {
        mptr[i] = new int[size];
        for(int j = 0; j < size; ++j)
        {
            mptr[i][j] = k;
            ++k;
            if(k == 8)
            k=0;
            std::cout << mptr[i][j] << std::endl;
        }
    }
    ZeroM(mptr, size);
    for(int i = 0; i < size; ++i)
    {
        delete mptr[i];
    }
    delete [] mptr;
    return 0;
}