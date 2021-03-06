#include <iostream>
#include <cstring>

int main() {
    int n;
    int a[10000];
    
    std::cin >> n;
    
    for (int i = 0; i <= n; i++) {
        a[i] = 1;
    }
    
    a[1] = 0;
    a[2] = 1;
    
    int i = 2;
    while (i * i <= n) {
        if (a[i] == 0) {
            i++;
            continue;
        }
        
        int j = 2;
        while (i * j <= n) {
            a[i * j] = 0;
            j++;
        }
        
        i++;
    }
    
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            std::cout << i << " ";
        }
    }
    
    return 0;
}