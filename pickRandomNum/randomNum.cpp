#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Array of numbers
    int numbers[] = { 10, 20, 30, 40, 50 };

    // Calculate the size of the array
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Generate a random index
    int randomIndex = rand() % arraySize;

    // Pick the random number from the array
    int randomNumber = numbers[randomIndex];

    // Output the random number
    cout << "Random number picked from array: " << randomNumber << endl;

    return 0;
}
