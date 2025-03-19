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
    //std::cout << "Tahmin edilecek sayi: " << RandomNumber << std::endl;
    while (true) {
        int value;
        std::cout << "Bir sayi tahmin ediniz: ";
        std::cin >> value;
        if (value == RandomNumber) {
            std::cout << "Tebrikler! Dogru tahmin ettiniz :) " << std::endl;
            break;
        }else if(value > RandomNumber){
            std::cout << "Büyük bir sayı tahmin ettiniz." << std::endl;
        }else if (value < RandomNumber) {
            std::cout << "Kucuk bir sayı tahmin ettiniz." << std::endl;
        }else {
            std::cout << "Kaybettiniz:(" << std::endl;
        }
    }
}
