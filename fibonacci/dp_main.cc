#include <iostream>

uint64_t fib(const uint64_t n){
    return 0;
}

int main(){
    time_t start, end;
    time(&start);
    std::cout << fib(39) << std::endl;
    time(&end);
    std::cout << double(end-start) << std::endl;
    return 0;
}