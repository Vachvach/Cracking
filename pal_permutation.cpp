#include <iostream>
#include <string>
#include <vector>


bool Pal_Per(std::string& str)
{
    std::string temp;
    int count = 0;
    int fr = 0;
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] != ' ')
        {
            temp.push_back(str[i]);
            ++count;
        }
    }
    // for(int i = 0, j = temp.size()-1; i < j; --j)
    // {
    //     if(temp[j] == temp[i])
    //     {
    //         fr++;
    //         ++i;
    //     }
    //     else if(i == j)
    //     {
    //         ++i;
    //     }
    // }
    // std::cout << fr;
    for(int i = 0; i < temp.size();++i)
    {
        for(int j = temp.size()-1; j > i; --j)
        {
            if(temp[j] == temp[i])
            {
                fr++;
            }
        }
    }
    
    
    if(count%fr == 0)
    {
        return false;
    }

    return true;
}

int main()
{
    std::string s {"bluedouebdl"};
    
    int res = Pal_Per(s);
    if(res)
    {
        std::cout << "your str is palidrom palmutation";
    }
    else
    std::cout << "your str is not palidrom palmutation";
    return 0;
}