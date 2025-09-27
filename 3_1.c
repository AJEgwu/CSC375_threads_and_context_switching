#include <stdio.h>
#include <pthread.h>

void *helper(void *arg) {
    printf("HELPER\n");
    return NULL;
}

int main(void) {
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, NULL);
    // pthread_yield();
    // pthread_yield gives an error, using sched_yield instead
    sched_yield();
    printf("MAIN\n");
    return 0;
}
