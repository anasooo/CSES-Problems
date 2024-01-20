#include <iostream>

int main()
{
    long int n;
    std::cin >> n;
    while(n > 1)
    {
        if(n % 2 == 0)
        {
            std::cout << n <<" ";
            n /= 2;
        }
        else{
            std::cout << n <<" ";
            n = (( n * 3) + 1);
        }
    } 
    std::cout<< '1' << std::endl;
}