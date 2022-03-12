#include <stdio.h> 
int main(){
	//宣告陣列
	int scores[]={12,5,21,15,32,10,6,31,11,10};
 	int assists[]={2,9,4,3,6,1,11,6,9,10};
 	int rebounds[]={5,7,1,5,10,3,0,7,6,4};
	//
	int length = sizeof scores/sizeof scores[0]; //10
	//計算總分
	int sum=0;
	for(int n=0; n<length; n++){
		sum+=scores[n];
	}
	printf("總分:%d,平均:%d\n",sum,sum/length);
	int max1=scores[0], max2=scores[1];
	int max_index1=0, max_index2=1;
	if(max1<max2){
		max1 = scores[1];
		max_index1 = 1;
		max2 = scores[0];
		max_index2 = 0;
	}
	for(int n=2; n<length ; n++){
		if(scores[n]>max1){
			max2 = max1;
			max_index2 = max_index1;
			max1 = scores[n];
			max_index1 = n;
		} else if (scores[n]>max2){
			max2 = scores[n];
			max_index2 = n;
		}
	}
	printf("最高分為%d, 助攻:%d次,籃板:%d個\n",max1,assists[max_index1],rebounds[max_index1]);
	printf("次高分為%d, 助攻:%d次,籃板:%d個\n",max2,assists[max_index2],rebounds[max_index2]);
	return 0; 
}
