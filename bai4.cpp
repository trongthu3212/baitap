#include <iostream>

int main() {
    int n, x;
    int a[100000];
    
    std::cin >> n >> x;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) {
            std::cout << "YES";
            return 0;
        } else if (x > a[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    std::cout << "NO";
    return 0;
}