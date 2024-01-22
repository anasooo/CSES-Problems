#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n == 2 || n == 3)
    {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    int i = 0;
    int print = n - 1;
    while(i < n / 2)
    {
        std::cout << print << " ";
        print -= 2;

        i++;
    }
    print = n;
    i = 0;
    while(i <= n / 2 && print != 0)
    {
        std::cout << print << " ";
        print -= 2;

        i++;
    }
    std::cout << std::endl;
}