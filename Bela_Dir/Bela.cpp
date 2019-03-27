#include <iostream>
#include <string>

int main(){
    int N = 0, total_Score = 0;
    char suit;
    std::string card = "";
    std::cin >> N >> suit;
    for (int i = 0; i < N*4; i++){
        std::cin >> card;
        if (card[1] == suit){
            if (card[0] == 'J')
                total_Score += 20;
            else if (card[0] == '9')
                total_Score += 14;
        }
        else{
            if (card[0] == 'J')
                total_Score += 2;
            else if (card[0] == '9')
                total_Score += 0;
        }
        
        switch (card[0])
        {
            case 'A':
                total_Score += 11;
                break;

            case 'K':
                total_Score += 4;
                break;

            case 'Q':
                total_Score += 3;
                break;

            case 'T':
                total_Score += 10;
                break;

            default:
                break;
        }
    }
    std::cout << total_Score << std::endl;
    return 0;
}