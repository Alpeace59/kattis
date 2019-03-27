#include <iostream>

int main(){
    int n = 0, r = 0, e = 0, c = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++){    
        std::cin >> r >> e >> c;
        if (r == e - c)
            std::cout << "does not matter" << std::endl;
        else if (r < e - c)
            std::cout << "advertise" << std::endl;
        else
            std::cout << "do not advertise" << std::endl;
    }
    return 0;
}