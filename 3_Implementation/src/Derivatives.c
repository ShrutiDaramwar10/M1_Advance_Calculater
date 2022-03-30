#include<math.h>
float derivative(float c, float x ,float n)
{
	float powerval = pow(x, n-1);
	return n * c * powerval;
}
