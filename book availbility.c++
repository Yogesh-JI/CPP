#include <iostream>
#include <cctype>

// Function to check if the book is available within the price range
void checkBookAvailability(void* pricePtr, void* availabilityPtr) {
    float* price = static_cast<float*>(pricePtr);
    char* availability = static_cast<char*>(availabilityPtr);

    // Check if the price is within the given range and availability is "Y" or "y"
    if (*price > 0 && *price < 2500.50 && (*availability == 'Y' || *availability == 'y')) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}

int main() {
    float bookPrice;
    char availabilityStatus;

    // Input price and availability status
    std::cin >> bookPrice;
    std::cin >> availabilityStatus;

    // Validate availability status (should be 'Y' or 'y' , 'N' or 'n')
    if (availabilityStatus != 'Y' && availabilityStatus != 'y' &&
        availabilityStatus != 'N' && availabilityStatus != 'n') {
        std::cout << "No" << std::endl;
        return 0;
    }

    // Call the function to check book availability
    checkBookAvailability(&bookPrice, &availabilityStatus);

    return 0;
}
