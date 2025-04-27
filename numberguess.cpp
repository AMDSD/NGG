#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    std::srand(std::time(0));
    int secretNumber, guess, tries = 0, maxTries;
    int range;
    char difficulty;

    std::cout << "Welcome to the Number Guessing game! " << '\n';
    std::cout << "I'm thinking of a number between 1 and 100. " << '\n';
    std::cout << "You have 5 chances to guess the correct number. " << '\n';

    std::cout << "Please select the difficulty level: "<< '\n';
    std::cout << "1. Easy (10 chances)" << '\n';
    std::cout << "2. Medium (5 chances) " << '\n';
    std::cout << "3. Hard (3 chances)" << '\n';


do {
        std::cout << "Enter your choice: ";
        std::cin >> difficulty;

        switch(difficulty){
        case '1':
            std::cout << "Great! You have selected the Easy difficulty level. " << '\n';
            std::cout << "Let's start the game!" << '\n';
                range = 100;
                maxTries = 10;
            break;
        case '2':
            std::cout << "Great! You have selected the Medium difficulty level. " << '\n';
            std::cout << "Let's start the game!" << '\n';
                range = 100;
                maxTries = 5;
            break;
        case '3':
            std::cout << "Great! You have selected the Medium difficulty level. " << '\n';
            std::cout << "Let's start the game!" << '\n';
                range = 100;
                maxTries = 3;
            break;
        default:
            std::cout << "Please only choose (1-3)" << '\n';
            continue;

        }
        break;
    }while (true);


    secretNumber = std::rand()% range + 1;

    while ( tries < maxTries) {
        std::cout << "Enter your guess (You have " << maxTries - tries << " tries left): " <<'\n'; 
        std::cin >> guess;
        tries++;

        if (guess > secretNumber) {
            std::cout << "Incorrect! The number is less than " << guess <<'\n';
        } else if (guess < secretNumber) {
            std::cout << "Incorrect! The number is greater than " << guess <<'\n';
        } else {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << tries << " tries!" << '\n';
            break;
        }
    }

    if (tries >= maxTries) {
        std::cout << "Sorry, you've run out of tries. The secret number was " << secretNumber <<"." << '\n';
    }

    return 0;

}
