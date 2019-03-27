#include <iostream>
#include <string>
#include <vector>

int main(){
    int n = 0, size = 0;
    std::vector<std::string> cities;
    std::string city;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> size;
        for (int k = 0; k < size; k++){
            std::cin >> city;
            if (k == 0)
                cities.push_back(city);
            else{
                for (int x = 0; x < cities.size(); x++){
                    if (city == cities[x]){
                        x = cities.size();
                    }
                    else if (x == cities.size() - 1){
                        cities.push_back(city);
                        x = cities.size();
                    }
                }
            }
        }
        std::cout << cities.size() << std::endl;
        cities.clear();
    }
    return 0;
}