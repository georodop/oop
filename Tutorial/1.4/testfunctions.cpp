#include <iostream>

void doPrint(){
    std::cout << "In doPrint" << std::endl;
}

int main(){
    std::cout << "Starting main" << std::endl;
    doPrint();
    std::cout << "End of main" << std::endl;
    
    return 0;
}