#include <iostream>

int
main(){
#ifdef YX
    std::cout << "Define YX" << std::endl;
#else
    std::cout << "No Define YX" << std::endl;
#endif
}
