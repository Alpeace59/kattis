#include <iostream>

int main(){
    int n = 0, belowZero = 0;
    std::string temps = "";

    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> temps;
        if(temps[0] == '-'){
            belowZero++;
        }
    }
    std::cout << belowZero << std::endl;
    return 0;
}