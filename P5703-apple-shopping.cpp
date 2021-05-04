#include <iostream>
// using namespace std; //这里我之前忘记分号了，下面一行的int就会报错有波浪线

namespace zwy {
    int cin() {
        return 0;
    }
}


int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << a * b << std::endl;
    std::cout << zwy::cin() << std::endl;
    return 0;
}