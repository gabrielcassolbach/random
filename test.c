#include <assert.h>
#include "ppos.h"

void test_semaphore() {
    semaphore_t sem;
    assert(sem_create(&sem, 1) == 0);

    assert(sem_down(&sem) == 0);
    assert(sem.counter == 0);

    assert(sem_up(&sem) == 0);
    assert(sem.counter == 1);

    assert(sem_destroy(&sem) == 0);
}

int main() {
    ppos_init();
    test_semaphore();
    printf("All tests passed.\n");
    return 0;
}