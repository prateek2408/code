#include <iostream>

uint64_t fib(const uint64_t& n){
    if (n==0){
        return n;
    }
    uint64_t a=0,b=1,c,i;
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    time_t start,end;
    time(&start);
    std::cout << fib(10000000000) << std::endl;
    time(&end);
    std::cout << double(end-start) << std::endl;
    return 0;
}