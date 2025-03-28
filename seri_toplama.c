#include <stdio.h>
#include <time.h>
# define N 100000000
int main(){
    long long sum=0;
    clock_t start=clock();
    for (int i=0; i<N;i++) {
        sum+=i;
    }
    clock_t end=clock();
    double time_spent=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Seri Toplam: %11d, Süre: %f saniye\n", sum, time_spent);
    return 0;
}