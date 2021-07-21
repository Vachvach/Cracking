#include <iostream>
#include <string>

bool check_Permutation(std::string& s1, std::string& s2)
{
    
    unsigned int size = s1.size();
    int c = 0;
    int s = 0;
    if(s1.size() == s2.size())
    {
        for(int i = 0; i < s1.size();++i)
        {
            for(int j = 0; j < s2.size(); ++j)
            {
                if(s1[i] == s2[j])
                {
                    s ^= (0 << s1[j]);
                    s ^= (1 << s2[j]);
                    // if(s1[i] == s1[i+1])
                    // {
                    //     s |= (1 << s1[i]);
                    //     s |= (1 << s1[i+1]);
                    // }
                }
            }
        }
        // std::cout << s; 
        if(s)
        {
            return true;
        }
        else
        return false;
    }
    return 0;

    // if(s1.size() == s2.size())
    // {
    //     for(int i = 0; i < s1.size();++i)
    //     {
    //         for(int j = 0; j < s2.size();++j)
    //         {
    //             if(s1[i] == s2[j])
    //             {
    //                 count++;
    //                 count = count - j;                 
    //             }
    //            else if(s1[i] == s1[i+1])
    //             {
    //                 s++;
    //             }
    //         }
    //     }
    //     if(count == s1.size())
    //     {
    //         return true;
    //     }
    // }
    // return false;
}
int main()
{
    std::string str {"ppoo"};
    std::string ctr {"oppo"};
    int res = check_Permutation(str, ctr);
    if(res)
    {
        std::cout << "I'ts a string Permutation";
    }
    else
    std::cout << "I'ts not a string Permutation";
    return 0;
}