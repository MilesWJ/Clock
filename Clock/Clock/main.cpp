# include "Clock.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    Clock Clock;
    
    std::cout << "Enter the current seconds: ";
    std::cin >> Clock.seconds;
    
    std::cout << "Enter the current minutes: ";
    std::cin >> Clock.minutes;
    
    std::cout << "Enter the current hours: ";
    std::cin >> Clock.hours;
    
    Clock.run_clock(Clock.seconds, Clock.minutes, Clock.hours);
    
    return 0;
}
