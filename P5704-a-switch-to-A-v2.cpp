#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    cout << (char)(ch-32); // 类型强转 要加括号
    return 0;
}