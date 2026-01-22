#include <stdio.h>
#include <math.h>

 int main() {
	
	printf("\n--- D > 0 ---\n");
	double a = 1.0, b = -5.0, c = 6.0;
	double D = pow(b, 2) - 4 * a * c;
	
 if (D > 0) {
		
	double x1 = (-b + pow(D, 0.5)) / (2 * a);
	double x2 = (-b - pow(D, 0.5)) / (2 * a);
	
	printf("D = %.2d\n", D);
	printf("x1 = %.2f\n", x1);
	printf("x2 = %.2f\n", x2);
 }
    
    printf("\n--- D = 0 ---\n");
    
    a = 2.0; b = 4.0; c = 2.0;
    D = pow(b, 2) - 4 * a * c;
    
 if (D == 0) {
 	
	double x = (-b) / (2 * a);
	printf("D = %.2f\n", D);
	printf("x = %.2f\n", x);
}

    printf("\n--- D < 0 ---\n");
    a = 1.0; b = 2.0; c = 5.0;
    D = pow(b, 2) - 4 * a * c;
 if (D < 0) {
 	
    printf("D = %.2f\n", D);
    printf("Korney net.\n");
}
	
    return 0;	
}


