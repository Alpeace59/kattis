#include <iostream>

int main(){
    int tests = 0, n = 0, result = 1;
    std::cin >> tests;
    while(tests--){
        std::cin >> n;
        for (int i = 1; i <= n; i++){
            result *= i;
            result %= 10;
        }
        std::cout << result << std::endl;
        result = 1;
    }
    return 0;
}