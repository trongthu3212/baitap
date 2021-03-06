#include <iostream>
#include <cmath>

int main() {
    int n = 0;
    int x[10000];
    int y[10000];
    
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i];
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((abs(x[i] - x[j]) == abs(y[i] - y[j])) ||
                (x[i] == x[j]) || (y[i] == y[j])) {
                std::cout << "yes";
                return 0;
            }
        }
    }
    
    std::cout << "no";
    return 0;
}