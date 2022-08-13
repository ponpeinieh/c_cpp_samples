#include <stdio.h>
int main(){
	//«Å§i
	int i,j,k,year=1924;
	char tian[10][3]  ={"¥Ò", "¤A", "¤þ","¤B","¥³","¤v","©°","¨¯","¤Ð","¬Ñ"};
	char di[12][3]  ={"¤l", "¤¡", "±G","¥f","¨°","¤x","¤È","¥¼","¥Ó","¨»","¦¦","¥è"};
	for(i=0; i<60; i++){
		j = i%10;
		k = i%12;
		printf("%d:%s%s, ",year++, tian[j],di[k]);
	}
	return 0;
}
