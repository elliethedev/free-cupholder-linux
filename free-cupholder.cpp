#include <cstdlib> // For system()
#include <iostream>

int main() {
    std::cout << "Attempting to create cupholder..." << std::endl; // C output informing the user this program is creating a cupholder.
    
    int result = std::system("eject"); // Calls the eject command
    
    if (result == 0) {
        std::cout << "Cupholder created successfully!" << std::endl;
    } else {
        std::cerr << "\nFailed to start cupholder. Is the 'eject' utility missing or disabled from util-linux?\nhint: Is your CDROM/DVD drive in use?" << std::endl;
    }
    
    return 0;
}

