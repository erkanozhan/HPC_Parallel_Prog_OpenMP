# include <stdio.h>
# include <omp.h>
# include <time.h>
# define N 100000000
int main(){
    long long sum=0
    clock_t start =clock();

    omp_set_num_threads(4);
    #pragma omp parallel for reduction(+:sum)
    for (int i=0;i<N;i++){
        sum+=i;
    }
clock_t end=clock();
double time_spent=(double)(end-start)/CLOCKS_PER_SEC;
printf("Paralel Toplam: %11d, Süre: %f saniye\n",sum,time_spent);
return 0;
}