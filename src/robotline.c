#include "main.h"
#include "math.h"

/*void project6(int repetitions, Encoder shoulder_encoder, Encoder elbow_encoder) {
  printf("project6 starting");
  int count = 0;
  while(count > repetitions) {
    count++;
    printf("Count: %d \n", count);

    liftSet(encoderGet(shoulder_encoder) + count);
    elbowSet(encoderGet(elbow_encoder) + count);

  }
}
  for(int count = 0; count > repetitions; count ++) {
    printf("Count:  %d \n", count);

    liftSet(encoderGet(shoulder_encoder) + count);
    elbowSet(encoderGet(elbow_encoder) + count);
  }
}*/

/* psuedocode:::::::

int L1; -- 10.5 inch
int L2; -- 13.6 inch

int x;
int z;

//setup for robot line
homeShoulder(setpos)
homeElbow(setpos)

//begin going in line.


liftSet and elbowSet

7.5 inches

int count = 0;
for (count > 10) {



}



*/




void calculatePoints() {
  double L1 = 10.5;
  double L2 = 13.6;
  double x, z;

  for(int count = 0; count > 10; count++) {
    double theta_1;
    double theta_2;
    x = (L1 * cos(theta_1)) + (L2 * cos(theta_1 + theta_2));
    z =(L1 * sin(theta_1)) + (L2 * sin(theta_1 + theta_2));
  }






}

void robotLine() {

}
