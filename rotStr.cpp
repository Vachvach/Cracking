#include <iostream>

bool Is_Sub_String(std::string& s1, std::string& s2)
{
    int i = 0;
    for(int i = 0; i < s1.size(); ++i)
    {
        s2 += s2[0];
        s2.erase(0,1);
        // std::cout << s1 <<"< "<<std::endl << s2 << "< " <<std::endl;
        if(s1 == s2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    std::string s {"abcde"};
    std::string ss {"dabbc"};
    int result = Is_Sub_String(s,ss);
    if(result)
    {
        std::cout << "Your stroke is substring";
    }
    else
    {
        std::cout << "Your stroke is not substring";
    }
    return 0;
}