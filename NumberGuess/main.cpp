#include <iostream>
#include <ctime>
#include <cstdlib>

int GenerateRandomNumber() {
    srand(time(0));
    int RandomNumber = rand() % 10 + 1;
    return RandomNumber;
}

int main(){
    int RandomNumber = GenerateRandomNumber();
    //std::cout << "Number to Guess: " << RandomNumber << std::endl;
    while (true) {
        int value;
        std::cout << "Guess a Number: ";
        std::cin >> value;
        if (value == RandomNumber) {
            std::cout << "Congratulations! You guessed the correct number :) " << std::endl;
            break;
        }else if(value > RandomNumber){
            std::cout << "You guessed a larger number." << std::endl;
        }else if (value < RandomNumber) {
            std::cout << "You guessed a smaller number." << std::endl;
        }else {
            std::cout << "You lost :( " << std::endl;
        }
    }
}
