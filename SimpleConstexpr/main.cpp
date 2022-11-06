#include <iostream>

constexpr auto gcd(int a, int b){
    while (b != 0){
        auto t=b;
        b= a % b;
        a= t;
    }
    return a;
}

int main(int argc, const char * argv[]) {

    std::cout << "\n";
    
    constexpr int i= gcd(11, 121);
    
    int a= 11;
    int b= 121;
    int j= gcd(a, b);
    
    std::cout << "gcd(11,121): " << i << '\n';
    std::cout << "gcd(a,b): " << j << '\n';
    
    std::cout << '\n';
}
