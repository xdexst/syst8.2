#define ROWS 2
#define COLS 3
#include <stdio.h>
int m[ROWS][COLS] = {{11, 12, 13},
                     {21, 22, 33}
                    };
int main () {
	int col;
	int row;
	int s1[row];
	int s2[1];
	int s3[1];
	int a;
	int b;
	int c;
for (int row=0; row<ROWS; row++){
	for (int col=0; col<COLS; col++){
		printf ("%5d", m[row][col]);
}
printf ("\n");
}
for (int row=0; row<ROWS; row++){
	for (int col=0; col<COLS; col++){
		s1[row]+=m[row][col];
}

printf ("\n");
}
for (int row=0; row<ROWS; row++){
	for (int col=0; col<COLS; col++){
		printf ("%5d", m[row][col]);
}
printf ("%5d", s1[row]);
printf ("\n");
}
return 0;
}
