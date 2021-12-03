#include <iostream>

using namespace std;

int main () {


int tb [10] = {160,170,168,178,172,165,180,178,172,169};
int sum = 0;

int length = sizeof(tb) / sizeof(*tb);

for(int i = 0 ; i < length; i++) {
	sum += tb[i];
}

float rata = (float)sum / length;
printf ("average from %d / %d : %.2f ",sum,length,rata);
return 0;

}
