#include <iostream>

int main() {
    int a, n, m;
    std::cin >> a >> n >> m;
    
    int k = 1;
    
    for (int i = 0; i < n; i++) {
        k = (k * (a % m)) % m;
    }
    
    std::cout << k;
    return 0;
}