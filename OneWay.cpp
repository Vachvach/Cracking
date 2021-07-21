#include <iostream>
#include <string>


bool OneWay(std::string& str1, std::string& str2)
{
    int count1 = str1.size();
    int count2 = str2.size();
    int c = 0;
        if(count1 < count2)//ins
        {
            for(int i = 0; i < count2; ++i)
            {
                if(str1[i] == str2[i])
                {
                    c++;
                }
                else
                {
                    c = count2 - c;
                }
            }
            if(c) return true;
            else return false;
            
        }
        else if(count1 > count2)//del
        {
            for(int i = 0; i < count2; ++i)
            {
                if(str1[i] == str2[i])
                {
                    c++;
                }
                else
                {
                    c = count2 - c;
                }
            }
            if(c) return true;
            else return false;
        }
        else if(count1 == count2)//rep
        {
            for(int i = 0; i < count1; ++i)
            {
                if(str1[i] == str2[i])
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            if(c) return true;
            else return false;
        }
        return 0;
}
int main()
{
    std::string s1 {"pale"};
    std::string s2 {"page"};
    int bul = OneWay(s1,s2);
    if(bul)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
    return 0;
}