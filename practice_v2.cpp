#include <iostream>
#include <ctime>
int main(){
    //ternary operator
    //break stop loop
    //skip section of a loop
    int rows;
    int columns;
    
    std::cout << "how many columns?";
    std::cin >> columns;

    std::cout << "how many rows?";
    std::cin >> rows;

    

        for(int i = 1; i <= columns; i++){
            
            for(int j = 1; j <= rows; j++){
                std::cout << "-" << " ";
        }
        std::cout << '\n';
    
    }
    return 0;
}
