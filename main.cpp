#include <iostream>

int main()
{
    char* username = getenv("USER");
    if (username == nullptr) {
        std::cerr << "Unable to get the username." << std::endl;
    } else {
        std::cout << "Hello, Mr. " << username << std::endl;
    }
    return 0;
}

