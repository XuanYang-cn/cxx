#include <iostream>
#include <ostream>
#include <string>

int
main(){
    std::string in_s;
    std::cout << "Input: ";
    std::cin >> in_s;
    std::cout << "Result: " << in_s << std::endl;

    for(std::string::iterator it=in_s.begin(); it != in_s.end(); ++it) {
        char after;
        if ((*it) == 'z' || (*it) == 'Z'){
            after = static_cast<char>((*it)-25);
        } else{
            after = static_cast<char>((*it)+1);
        }
        std::cout << after << std::endl;
        
    }
    return 0;
}
