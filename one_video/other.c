#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int s[n];
		int  smallest = 0;
		char v[n];
		for (int i=0; i<n; i++){
			scanf("%d", &s[i]);
		}
		scanf("\n"); // point to the next line
		for (int i=0; i<n; i++){
			scanf("%c", &v[i]);
		}

		for (int i=0; i<n; i++){
			if (v[i] == '0'){
				if (smallest == 0){
					smallest = s[i];
				} else if (smallest > s[i]){
					smallest = s[i];

				}
			}
		}
		printf("%d\n", smallest);
	}
	return 0;
}

