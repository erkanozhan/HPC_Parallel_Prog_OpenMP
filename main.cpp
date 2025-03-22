#include <stdio.h>
#include <omp.h>

int main() {
    printf("Parallel execution starts now!\n");

#pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        double omp_time = omp_get_wtime();
        printf("Thread %d started execution at OMP time: %f seconds\n", thread_id, omp_time);
    }

    return 0;
}
