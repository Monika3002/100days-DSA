#include <iostream>
#include <vector>

int main() {
    const int vectorLength = 50000;

    // Create a vector with zeros
    std::vector<int> myVector(vectorLength, 2);

    // Set every 5000th element to 1
    // for (int i = 0; i < vectorLength; i += 5000) {
    //     myVector[i] = 2;
    // }

    // Print the vector
    for (int i = 0; i < vectorLength; ++i) {
        std::cout << myVector[i] << " ";
    }

    return 0;
}
