#include <stdio.h>
#include<stdlib.h>
#include<string.h>


struct stu{
	int sr_no;
	char name[100];
	char rp_name[100];
	int year;
	int dept;
	int hostel;	
	int floor;
	
};
int main(){
	int count1=0,count2=0,count3=0,count4=0,a_h1=0,a_h2=0,a_h3=0,a_h4=0,count_f0=0,count_f1=0,count_f2=0,count_f3=0,r_f0=0,r_f1=0,r_f2=0,r_f3=0,r_f4=0,n,k,x,t,a,flag=0;//her variable a is total no of 2nd 3rd and 4th year students
	int count_pf1=0,count_pf3=0,count_pf4=0;
	printf("no of availble seats :");
	scanf("%d",&n);
	printf("no applicants :");
	scanf("%d",&k);
	struct stu s[k];
	x=(n+4)/4;
	t=x-4;//ground floor available seats
	printf("\nenter the student details");
	
	int i=0;
	
	while (i<k){
		s[i].sr_no=i+1;
		printf("\nName: ");
		scanf("%s",&s[i].name);
		printf("\nYear:");
		scanf("%d",&s[i].year);
		if (s[i].year>=2){
		
			printf("\nEnter your room Partner name");
			scanf("%s",&s[i].rp_name);
		}
		printf("\nDept(1->cse\n2->ece\n3->eee\n4->mech\n5->civil\n6-chem\n7->meta\n8->mining)");
		scanf("%d",&s[i].dept);
		if (s[i].year>=2){
			printf("\nEnter the floor preference :  ");
			scanf("%d",&s[i].floor);
		}
		else{
			s[i].floor=0;
		}
		printf("\nHostel  ");
		
		if (s[i].year>=2){
			printf("\n1.From same Hostel.");
			printf("\n2.Newly admitted.");
			printf("\n3.Staying outside the campus and want to be in Hostel.");
			printf("\n4.You are from Different Hostel.");
			scanf("%d",&s[i].hostel);
			printf("\nyour choice : %d",s[i].hostel);
		}
		else{
			s[i].hostel=2;
			printf("\nyour choice : %d",s[i].hostel);
		}
		i=i+1;
		
	}
	for(i=0;i<k;i++){
		if (s[i].year==1){
			count1++;
			
			count_f0++;
		}
		else if(s[i].year==2){
			count2++;
		}
		else if(s[i].year==3){
			count3++;
		}
		else if(s[i].year==4){
			count4++;
		}
	}
	a=k-count1;
	for (i=0;i<k;i++){
		if (s[i].floor==1){
			count_f1++;
		}
		else if(s[i].floor==2){
			count_f2++;
		}
		else if (s[i].floor==3){
			count_f3++;
		}
		
	}
	if (count_f0>=t){
		printf("\nThe no of students on the ground floor are %d",t);
		printf("\nthe number of students who got their seat by preference 1 : %d",t);
		printf("\nThe vacant seeats are : 0");
	}
	else {
		printf("\nThe no of students on the ground floor are %d",count_f0);
		printf("\nthe number of students who got their seat by preference 1 : %d",count_f0);
		printf("\nThe vacant seeats are : %d",t-count_f0);
	}
	
	for (int i=0;i<k;i++){	
		
		if (s[i].floor==1 && s[i].hostel==1 ){
			count_pf1++;			
		}
		if (s[i].floor==1 && s[i].hostel==3){
			count_pf3++;
		}
		if (s[i].floor==1 && s[i].hostel==4){
			count_pf4++;
		}
	}
	if (count_pf1>=x){
		printf("\n the no of students on the first floor by pref 1 : %d ",x);
		printf("\n the vacant seat on first floor = 0");
	}
	else{
		printf("\n the no of students on the first floor by pref 1 : %d ",count_pf1);
		r_f1=x-count_pf1;
		if (count_pf3>=r_f1){
			printf("\n the no of students on the first floor by pref 3 : %d ",r_f1);
			printf("\n the vacant seat on first floor = 0");
		}
		else{
			printf("\n the no of students on the first floor by pref 3 : %d ",count_pf3);
			r_f1=r_f1-count_pf3;
			if (count_pf4>=r_f1){
				printf("\n the no of students on the first floor by pref 4 : %d ",r_f1);
				printf("\n the vacant seat on first floor = 0");
			}
			else{
				printf("\n the no of students on the first floor by pref 3 : %d ",count_pf4);
				r_f1=r_f1-count_pf4;
				printf("\n the vacant seat on first floor = %d",r_f1);
			}
		}
	}
	
	count_pf1=0;count_pf3=0;count_pf4=0;
	
	for (int i=0;i<k;i++){	
		
		if (s[i].floor==2 && s[i].hostel==1 ){
			count_pf1++;			
		}
		if (s[i].floor==2 && s[i].hostel==3){
			count_pf3++;
		}
		if (s[i].floor==2 && s[i].hostel==4){
			count_pf4++;
		}
	}
	if (count_pf1>=x){
		printf("\n the no of students on the second floor by pref 1 : %d ",x);
		printf("\n the vacant seat on second floor = 0");
	}
	else{
		printf("\n the no of students on the second floor by pref 1 : %d ",count_pf1);
		r_f1=x-count_pf1;
		if (count_pf3>=r_f1){
			printf("\n the no of students on the second floor by pref 3 : %d ",r_f1);
			printf("\n the vacant seat on second floor = 0");
		}
		else{
			printf("\n the no of students on the second floor by pref 3 : %d ",count_pf3);
			r_f1=r_f1-count_pf3;
			if (count_pf4>=r_f1){
				printf("\n the no of students on the second floor by pref 4 : %d ",r_f1);
				printf("\n the vacant seat on second floor = 0");
			}
			else{
				printf("\n the no of students on the second floor by pref 3 : %d ",count_pf4);
				r_f1=r_f1-count_pf4;
				printf("\n the vacant seat on second floor = %d",r_f1);
			}
		}
	}
	count_pf1=0;count_pf3=0;count_pf4=0;
	
	for (int i=0;i<k;i++){	
		
		if (s[i].floor==3 && s[i].hostel==1 ){
			count_pf1++;			
		}
		if (s[i].floor==3 && s[i].hostel==3){
			count_pf3++;
		}
		if (s[i].floor==3 && s[i].hostel==4){
			count_pf4++;
		}
	}
	if (count_pf1>=x){
		printf("\n the no of students on the third floor by pref 1 : %d ",x);
		printf("\n the vacant seat on third floor = 0");
	}
	else{
		printf("\n the no of students on the third floor by pref 1 : %d ",count_pf1);
		r_f1=x-count_pf1;
		if (count_pf3>=r_f1){
			printf("\n the no of students on the third floor by pref 3 : %d ",r_f1);
			printf("\n the vacant seat on third floor = 0");
		}
		else{
			printf("\n the no of students on the third floor by pref 3 : %d ",count_pf3);
			r_f1=r_f1-count_pf3;
			if (count_pf4>=r_f1){
				printf("\n the no of students on the third floor by pref 4 : %d ",r_f1);
				printf("\n the vacant seat on third floor = 0");
			}
			else{
				printf("\n the no of students on the third floor by pref 3 : %d ",count_pf4);
				r_f1=r_f1-count_pf4;
				printf("\n the vacant seat on third floor = %d",r_f1);
			}
		}
	}
			
}
