#include <iostream>
#include <unistd.h>

#include "processor.h"
#include "customexception.h"

Processor::Processor () {
    std::cout << "Processor Created." << std::endl;
};

Processor::~Processor() {} 

void Processor::run() {
    
    int loops = 0;
    for (;;) {
        std::cout << "Processor Running::Count::" << loops << std::endl;
        loops += 1;
        usleep(300000);
        if (loops > 10) { 
            throw CustomException();
        } 
    }
}