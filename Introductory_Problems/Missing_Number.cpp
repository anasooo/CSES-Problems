#include <iostream>
#include <map>


int main() {
    int n;
    std::cin >> n;

    std::map<int, bool> dic;
    int i = n - 1;
    while (i--) {
        int num;
        std::cin >> num;
        dic[num] = true;
    }

    i = 1;
    while(dic.find(i) != dic.end())
        i++;
    std::cout << i << std::endl;

    return 0;
}
