#include <math.h>

int sum_of_powers_acc(int n, int acc){
    if (n <= 0){
        return acc;
    }
    return sum_of_powers_acc(n-1, acc + pow(n, n));
}

int sum_of_powers(int n){
    return sum_of_powers_acc(n, 0);
}
