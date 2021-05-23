#include "Clock.hpp"
#include <unistd.h>
#include <iostream>

void Clock::run_clock(int s, int m, int h){
    std::cout << "\nStarted at " << h << ":" << m << ":" << s << "\n" << std::endl;
    while(true){
        std::cout << h << ":" << m << ":" << s << std::endl;
        s++;
        
        if (s > 59){
            s = 0;
            m++;
        }
        
        if (m > 59){
            m = 0;
            h++;
        }
        
        if (h > 24){
            h = 0;
        }
        sleep(1);
    }
}
