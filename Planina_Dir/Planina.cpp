#include <iostream>
#include <math.h>

int sidePoints(int N, int points);

int sidePoints(int N, int points){
    if (N == 0)
        return pow(points, 2);
    else
        return sidePoints(N - 1, (points + (points - 1)));
}

int main(){
    int N = 0;
    std::cin >> N;
    std::cout << sidePoints(N, 2) << std::endl;
    return 0;
}