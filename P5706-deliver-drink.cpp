#include <iostream> // 这一行是多余的吗
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    double t;
    int n;
    cin >> t >> n;
    // trick
    int a = 1<<2;
    cout << setprecision(3) << (t/n) << '\n' << 2*n << endl;
    return 0;
}