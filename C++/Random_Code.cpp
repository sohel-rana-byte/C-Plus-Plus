#include <iostream>
#include <windows.h> // For Sleep() function

void printHeart() {
    std::cout << "   ***       ***   \n";
    std::cout << "  *****     *****  \n";
    std::cout << " *******   ******* \n";
    std::cout << " ***************  \n";
    std::cout << "   *************   \n";
    std::cout << "    ***********    \n";
    std::cout << "      *******      \n";
    std::cout << "       *****       \n";
    std::cout << "        ***        \n";
    std::cout << "         *         \n";
}

void saySorry() {
    for (int i = 1; i <= 100; ++i) {
        std::cout << "Sorry, Nipa ❤️ (Message " << i << " of 100)\n";
        Sleep(100); // Sleep for 100 milliseconds
    }
}

int main() {
    std::cout << "Dear Nipa,\n";
    std::cout << "Let me show you how sorry I am...\n\n";

    // Print a heart shape
    printHeart();
    std::cout << "\n";

    // Say "Sorry Nipa" 100 times with delay
    saySorry();

    std::cout << "\nPlease forgive me! 💕\n";
    return 0;
}
