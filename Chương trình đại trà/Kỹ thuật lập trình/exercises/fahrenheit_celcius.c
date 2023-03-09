#include <stdio.h>

/* print fahrenheit-celcius table 
 * for fahr = 0, 20, .., 300 */

main(){

	float fahr, celcius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper){
		celcius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}
