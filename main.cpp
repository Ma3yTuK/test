#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.1415926535897932384923040;

int main()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i=a; i<=b; i++) {
        if (i%c==0)
            cout << i << ' ';
    }
    cout << endl;
    return 0;
}
