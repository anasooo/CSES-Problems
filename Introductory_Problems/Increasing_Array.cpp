#include <iostream>
#include <vector>

int main()
{
    int n;
    int i = 0;
    std::cin >> n;
    std::vector<int> v;
    while(i < n)
    {
        int num;
        std::cin >> num;
        v.push_back(num);
        i++;
    }
    i = 0;
    long int move = 0;
    while(i < n-1)
    {
        if(v[i] > v[i+1])
        {
            move += v[i] - v[i+1];
            v[i+1] = v[i];
        }
        i++;
        
    }
    std::cout << move << std::endl;
}