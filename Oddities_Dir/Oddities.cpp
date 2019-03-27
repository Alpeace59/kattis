#include <iostream>

int main(){
    int n = 0, x = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cin >> x;
        if (x % 2 == 0)
            std::cout << x << " is even" << std::endl;
        else
            std::cout << x << " is odd" << std::endl;
    }
    return 0;
}