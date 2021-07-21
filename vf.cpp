#include <iostream>
#include <string>
bool isUnique(std::string& str, char& cstr)
{
    for(int i = 0; i < str.size(); ++i)
    {
        if(cstr == str[i])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::string str {"BBB"};
    char r = str[0];
    int res = isUnique(str, r);
    if(res)
        std::cout << "Your string is Unique";
    else
        std::cout << "Your string not is Unique";
    return true;
}