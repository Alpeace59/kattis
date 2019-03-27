#include <iostream>

int main(){
    int N = 0;
    float p = 0.0, Q = 0.0, y = 0;

    std::cin >> N;
    for (int i = 1; i <= N; i++){
        std::cin >> p >> y;
        Q += (y * p);
    }
    std::cout << Q << std::endl;
    return 0;
}