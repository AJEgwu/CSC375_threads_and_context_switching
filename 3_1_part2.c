#include <stdio.h>
#include <pthread.h>

void *helper(void *arg) {
    printf("HELPER\n");
    return NULL;
}

int main(void) {
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, NULL);
    pthread_join(thread, NULL);  // ensure HELPER finishes first
    printf("MAIN\n");
    return 0;
}
