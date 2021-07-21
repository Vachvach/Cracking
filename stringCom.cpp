#include <iostream>
#include <string>

void StringCom(std::string str)
{
    std::string str2 = str;
    std::string tmp{""};
    int count = 0;
    int j = 0;
    for (int i = 0; i < str.size();++i)
    {
        if(str[i] == str2[j])
        {
            count++;
            
        }
        else
        {
            tmp.push_back(str[j]);
            tmp += std::to_string(count);
            // i+=count;
            // j+=count;
            count = 0;
            j=i--;
        }
    }
        tmp.push_back(str[j]);
        tmp += std::to_string(count);
    std::cout << tmp;
}

int main()
{
    std::string stroke{"aabccccca"};
    StringCom(stroke);
    return 0;
}