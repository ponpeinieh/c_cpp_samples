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
	//取得最高分
	int max = scores[0];
	int max_index = 0;
	for(int n=1; n<length; n++){
		if(scores[n]>max){
			max = scores[n];
			max_index = n;
		}
	}
	printf("最高分為%d, 助攻:%d次,籃板:%d個\n",max,assists[max_index],rebounds[max_index]);
	//次高分
	int high_2nd = -1;
	int index_2nd = -1;
	for(int n=0; n<length; n++){
		if (n==max_index) continue;
		if(scores[n]>high_2nd){
			high_2nd=scores[n];
			index_2nd=n;
		}
	}
	printf("次高分為%d, 助攻:%d次,籃板:%d個\n",high_2nd,assists[index_2nd],rebounds[index_2nd]); 
	return 0; 
}
