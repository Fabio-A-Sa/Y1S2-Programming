#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int const max_value = 4294967295;
    bool flag = false;
    int cobaia = max_value;

    while (flag != true) {
        flag = true;
        for (int denominador; denominador <= sqrt(cobaia); denominador++) {
            flag = flag and (cobaia % denominador != 0);
        }
        if (!(flag)) {
            cobaia = cobaia - 1;
            continue;
        }
    }
    cout << cobaia << endl;
    return 0;
} 