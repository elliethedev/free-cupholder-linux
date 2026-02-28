#include <cstdlib> // For system()
#include <iostream>

int main() {
    std::cout << "Attempting to create cupholder..." << std::endl; // using the eject command
    
    int result = std::system("eject"); // Calls the eject command
    
    if (result == 0) {
        std::cout << "Cupholder created successfully!" << std::endl;
    } else {
        std::cerr << "\nFailed to start cupholder. Is the 'eject' utility installed?\nhint: Is your CDROM/DVD drive in use?" << std::endl;
    }
    
    return 0;
}

