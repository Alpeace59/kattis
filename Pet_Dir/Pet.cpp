#include <iostream>

int main(){
    int scoreIn = 0, scoreBucket = 0, scoreBest = 0, 
        person = 0;

    for (int i = 1; i <= 5; i++){
        for (int k = 0; k < 4; k++){
            std::cin >> scoreIn;
            scoreBucket  += scoreIn;
        }
        if (scoreBucket > scoreBest){
            scoreBest = scoreBucket;
            scoreBucket = 0;
            person = i;
        }
        else
            scoreBucket = 0;
    }
    std::cout << person << " " << scoreBest << std::endl;
    return 0;
}