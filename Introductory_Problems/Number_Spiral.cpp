#include <iostream>
#include <cmath>

using namespace std;
int main(void)
{
    int t;
    cin >> t;

    while (t--) {
        int y, x;
        cin >> y >> x;
        long int sol = 1;
        if (max(x, y) % 2 == 0)
        {
            if (x > y)
            {
                cout << pow((x-1),2) << endl;
            }
            else
            {
                cout << pow(y,2) - x + 1 << endl;
            }
    }
    else
    {
      if (x > y)
      {
        cout << pow(x,2) - y + 1 << endl;
      }
      else
      {
        cout << pow((y - 1) , 2) + x << endl;
      }
    }
        cout << sol << "\n";
    }

    return 0;
}
