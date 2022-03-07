#include <stdio.h>

int main(void) {
	// your code goes here
	int k;
	scanf("%d",&k);
	while(k--){
	    int n;
	    scanf("%d",&n);
	int a[n];
	int team=8;
	for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	if((a[i]%7)!=0&&(a[i]%7)!=6)
	    team++;
	}
	printf("%d\n",team);
	}
	return 0;
}
