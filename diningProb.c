//break_the_bond
//jatt_james_bond
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>
#definde endl "\n"

//semaphore declaration
sem_t MUTEX;
sem_t chopChopSquare[5];  

//three states of philosophers
enum s{
 EATING , HUNGRY , THINKING
};

void CheckAvailability(int PhilNum);
void PickUpChopSticks(int PhilNum);
void PutChopsticksDown(int PhilNum);
void* magic(void* num);

int32_t main(){
  pthread_t Thread[5];
  

return 0;
}
