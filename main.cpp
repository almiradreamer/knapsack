#include <iostream>
#include <array>
#include <stdio.h>

int findMax(int a[], int n) {
    int max = a[0];
    int maxi = 0;
    for (int i = 0; i < n; i ++) {
        if (a[i] > max) {
            max = a[i];
            maxi = i;
        }
    }
    return maxi;
}
int main() {
    int v[100], w[100];
    int S;
    int n;
    int taken = 0;
    int value = 0;
    std::cout << "Enter size of knapsack";
    std::cin >> S;
    std::cout << "Enter number of items";
    std::cin >> n;
    for (int i = 0; i < n; i ++) {
        std::cin >> v[i];
        std::cout << i << " bo";
    }
    for (int i = 0; i < n; i ++) {
        std::cin >> w[i];
    }
    while (taken < S) {
        int t = findMax(v, n);
        if (taken + w[t] <= S) {
            taken += w[t];
            value += v[t];
            v[t] = w[t] = 0;
        }
    }
    std::cout << value;
    return 0;
}