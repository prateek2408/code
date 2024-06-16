#include <iostream>

uint64_t fib(const uint64_t& n){
    if (n <= 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    time_t start, end;
    time(&start);
    std::cout << fib(18) << std::endl;
    time(&end);
    std::cout << double(end-start) << std::endl;
    return 0;
}