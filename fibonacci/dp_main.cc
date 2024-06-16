#include <vector>
#include <iostream>

uint64_t fib(const uint64_t& n){
    if (n==0){
        return n;
    }
    std::vector<uint64_t> dp(n, 0);
    int i;
    dp[0] = 0;
    dp[1] = 1;
    for (i=2;i<=n;i++){
        dp[i+1] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    time_t start, end;
    time(&start);
    std::cout << fib(2) << std::endl;
    time(&end);
    std::cout << double(end-start) << std::endl;
    return 0;
}