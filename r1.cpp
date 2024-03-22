#include <math.h>

int sum_of_powers_acc(int n, int acc){
    if (n <= 0){
        return acc;
    }
    int newAcc = acc + pow(n, n);
    return sum_of_powers_acc(n-1, newAcc);
};

int sum_of_powers(int n){
    return sum_of_powers_acc(n, 0);
};

