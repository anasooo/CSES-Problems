#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

int main()
{
    int count = 1;
    int i = 0;
    std::string s;
    std::cin >> s;

    std::vector<int> save;
    while(i < static_cast<int>(s.size()))
    {
        if(s[i]== s[i+1])
            count++;
        else
        {
            save.push_back(count);
            count = 1;
        }
        i++;
    }
    std::cout<< *max_element(save.begin(), save.end()) << std::endl;
}