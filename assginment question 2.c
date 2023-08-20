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
	int n,k,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		a[i][0]=i+1;
		
	}
	for (i=0;i<n;i++){
		for (j=1;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	 //irving's algorithm for stable roomate matching
	while (there are unmatched people) do{
       let ai be the first unmatched person
       ai proposes to their favourite roomate aj who has not rejected him
           if(aj has received no proposal then
               aj acccepts ai
           else if(aj prefers ai over his current match ak then
           {    aj accepts ak
               reject symmetrically(ak,aj) 
           }
           else
              reject symmetrically(aj,ai)
     /*Phase I of the algorithm tries to establish semiengagements
    for every person. The general idea is that the first proposal 
	 of x goes to the first person on his preference list,
	and only if this proposal is rejected 
	(immediately or subsequently), x proposes to the 
	next person on his preference list and so on. 
	On the receiving side, y accepts a proposal only if
	 the proposing person ranks higher on his preference
	  list than the person whose proposal he has currently accepted.
     }
    Imagine the list of preferences written horizontally left 
	(most desired partner) to right (least desired partner).
	 Then the proposals made move from left to right, 
	 while the proposals accepted move from right to left. 
	 In a matching, both types of proposalsmeet at the same position.
	  This motivates the names for the following lists that holdthe
	   current set of proposals:
     
     */
     /*shows the pseudocode for phase I of Irving’s algorithm.
 It stops, when everyperson holds a proposal,
  which implies that every person has also made a proposal 
  thathas been accepted, i.e. that every person is semiengaged. 
  It returns false if someonehas run out of partners 
  (and is therefore engaged to himself), 
  which means that thereis no stable matching for this instance.
   If it returns true, we can still hope to find 
   stable matching in phase II of the algorithm

*/
      for all aj holding proposal from ai do
          reject symmetrically all(aj,ak) where aj prefers ai over ak
/*
Phase I usually ends with everybody semiengaged to someone,
 but with asymmetric engagements leftrank[x]<rightrank[x] for most persons x. 
 Such persons have to giveup their current proposal to leftperson[x] and find somebody 
 down the list that would(temporarily) accept a proposal from x.
 If x withdraws his proposal and proposes to y=secondperson[x], 
 who temporarily ac-cepts the proposal, the previous partners of x and y both loose their semiengagements and
  have to look themselves for their second best partners and so on. 
   It reduces the difference rightrank[x]-leftrank[x] for several persons xand is a step towards a matching.
   The key idea of phase II is to organize this rearrangement of semiengagements ina so called all-or-nothing cycle.
	In phase II of Irving’s algorithm, an all-or-nothing cycle is identi?ed and the corre-spodning rotation is executed
	  This process is iterated until there are no more all-or-nothing cycles
  (in which case we’ve found a stable matching) or until 
  someone runs outof partners after a rotation (in which case this instance has no stable matching)
*/
      for all cycles in (p1,...pn) and (q1..qn)such that
          qi is second preference of pi and pi+1 is last preference of qi do
          for i=1...n-1 do
              reject symmetrically(qi,pi+1)*/
/*
shows pseudocode for phase II which finds an all-or-nothing cycle, executes the corresponding rotation 
and iterates this until there are no more all-or-nothingcycles or a rotation has left a person without 
any partners to propose to.The complete algorithm consists of an initialization phase (not shown), 
which gen-erates a random preference list for each person, followed by calls to PHASE I and PHASE II
 */   
              
    
	
}