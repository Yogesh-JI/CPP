#include <iostream>
#include <cstring>

using namespace std;

// Function to count words using pointer to pointer
int countWords(char** sentence) {
    int count = 0;
    char* token = strtok(*sentence, " "); // Split the sentence into words using space as the delimiter
    while (token != nullptr) {
        count++;
        token = strtok(nullptr, " "); // Continue splitting the sentence
    }
    return count;
}

int main() {
    char input[1000];
    cin.getline(input, sizeof(input)); // Read the input sentence

    // Create a pointer to a pointer and initialize it with the address of the input sentence
    char* sentence = input;

    int wordCount = countWords(&sentence);
    cout << wordCount << endl;

    return 0;
}
