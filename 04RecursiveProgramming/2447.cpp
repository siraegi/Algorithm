#include <iostream>
#include <math.h>

using namespace std;
char a[2200][2200];
void blank(int n, int x, int y) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				a[x + i][y + i] = ' ';
			}
		}
}
void go(int n, int x, int y) {
	if (n == 1) {
		for (int i = 0; i < 3; i++) {
			a[x][y + i] = '*';
		}
		for (int i = 0; i < 3; i++) {
			if (i = 1)	a[x + 1][y + i] = ' ';
			else a[x + 1][y + i] = '*';
		}
		for (int i = 0; i < 3; i++) {
			a[x + 2][y + i] = '*';
		}
	}
	/*
	else {
		if (x < (int)pow(3, (double)n - 1)) {
			if (y < (int)pow(3, (double)n - 1)) return go(n-1,x,y);
			else if(y < 2*(int)pow(3, (double)n - 1)) return go(n - 1, x, y);
			else if(y < 3*(int)pow(3, (double)n - 1)) return go(n - 1, x, y);
		}
		else if (x < 2*(int)pow(3, (double)n - 1)) {
			if (y < (int)pow(3, (double)n - 1)) return go(n - 1, x, y);
			else if (y < 2 * (int)pow(3, (double)n - 1)) blank(n - 1, x, y);
			else if (y < 3 * (int)pow(3, (double)n - 1)) return go(n - 1, x, y);
		}
		else if (x < 3 * (int)pow(3, (double)n - 1)) {
			if (y < (int)pow(3, (double)n - 1)) return go(n - 1, x, y);
			else if (y < 2 * (int)pow(3, (double)n - 1)) return go(n - 1, x, y);
			else if (y < 3 * (int)pow(3, (double)n - 1)) return go(n - 1, x, y);
		}
	}
	*/
	else {
	   	go(n - 1, (int)pow(3, (double)n - 1), (int)pow(3, (double)n - 1));
		 go(n - 1, (int)pow(3, (double)n - 1), 2 * (int)pow(3, (double)n - 1));
		 go(n - 1, (int)pow(3, (double)n - 1), 3*(int)pow(3, (double)n - 1));
		 go(n - 1, 2*(int)pow(3, (double)n - 1), (int)pow(3, (double)n - 1));
		blank(n - 1, 2 * (int)pow(3, (double)n - 1), 2 * (int)pow(3, (double)n - 1));
		 go(n - 1, 2 * (int)pow(3, (double)n - 1), 3 * (int)pow(3, (double)n - 1));
		 go(n - 1, 3* (int)pow(3, (double)n - 1), (int)pow(3, (double)n - 1));
		 go(n - 1, 3 * (int)pow(3, (double)n - 1), 2 * (int)pow(3, (double)n - 1));
		 go(n - 1, 3 * (int)pow(3, (double)n - 1), 3 * (int)pow(3, (double)n - 1));
	}
}
int main(void) {
	int n;
    cin >> n;
	//vector<vector<char>> a(n, vector<char>(n, '*'));
	//printf("%d", (int)pow(3, 4.0));
	go(n/3-1, 0, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}