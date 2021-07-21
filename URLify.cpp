#include <iostream>
#include <string>
void URLify(std::string& str)
{
    std::string tmp {""};
    for(int i = 0;i < str.size(); ++i)
    {
        if(str[i] == ' ')
        {
            tmp += "%20";
        }
        else{
        tmp.push_back(str[i]);
        }
    }
    std::cout << tmp;
}
// void URLify(char ch[], int TrueSize)
// {
//     int i = 0;
//     int space;
//     while(ch[i] != '\0')
//     {
//         if(ch[i] == ' ') 
//         {
//             space++;
//         }
//     }
// }


int main()
{
    std::string stroke = {"I Will Be Back"};
    URLify(stroke);
}