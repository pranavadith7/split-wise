#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main()
{
	float taxi,movie,breakfast,lunch,dinner,total,avg;
	float ab,bb,cb,db,eb,fb,t;         //(t variable is used to store the amount paid by an individual incase there are more than 1 friends paying for the same activity)
	char name[10]="",f1[10]="",f2[10]="",f3[10]="",f4[10]="",f5[10]="",f6[10]="";       //(f1,f2,f3.... are the variables that stores the names of each friend)
	int n,i=0,temp,j;        //(temp is used to count the number of friends paying for a activity)

    printf("Done by :-\n\n");
    printf("          >> S. Pranav Adith\n");
    printf("          >> CB.EN.U4CSE19458\n\n");
	printf("========================================================================================================================\n");
	printf("                                                        Mini Project\n");
	printf("========================================================================================================================\n\n");
	
	printf("Enter the names of friends who went for outing =>\n");
	printf("_________________________________________________\n");
	printf("\nEnter name of first friend : ");
	scanf("%s",&f1);
	printf("Enter name of second friend : ");
	scanf("%s",&f2);
	printf("Enter name of third friend : ");
	scanf("%s",&f3);
	printf("Enter name of fourth friend : ");
	scanf("%s",&f4);
	printf("Enter name of fifth friend : ");
	scanf("%s",&f5);
	printf("Enter name of sixth friend : ");
	scanf("%s",&f6);
	
	ab=0;               //(ab,bb,cb,... is used to find the total amount paid by each friend)
	bb=0;
	cb=0;
	db=0;               
	eb=0;
	fb=0;
		
	while(i<5)
    {
	printf("\nSpecify the appropriate number to enter details.\n");
	printf(" 1 - Taxi\n");
	printf(" 2 - Breakfast\n");
	printf(" 3 - Lunch\n");
	printf(" 4 - Movie\n");
	printf(" 5 - Dinner\n");
	printf("\nEnter the appropriate number : ");
	scanf("%d",&n);
    
	switch(n)
    {
    case(1):
    	printf("\nHow many friends paid for taxi : ");
    	scanf("%d",&temp);
    	for(j=0;j<temp;j++)
    	{
    		printf("\n\nWho paid for taxi : ");
    		scanf("%s",&name);
    		printf("Enter amount paid by %s for taxi : ",name);
    		scanf("%f",&t);
    		taxi=taxi+t;
    		if(strcmp(name,f1)==0)
        {
        	ab=ab+t;
	    }
	    else if(strcmp(name,f2)==0)
	    {
		    bb=bb+t;
	    }
	    else if(strcmp(name,f3)==0)
	    {
	    	cb=cb+t;
	    } 
	    else if(strcmp(name,f4)==0)
	    {
	    	db=db+t;
	    } 
	    else if(strcmp(name,f5)==0)
	    {
	    	eb=eb+t;
	    } 
	    else if(strcmp(name,f6)==0)
	    {
	    	fb=fb+t;
		}
		}
	    
	   printf("\nDetails of Taxi have been recorded. Now specify some other number whose details have not been recorded.\n");
        
	    i=i+1;
	break;
		
	case(2):
		    printf("\nHow many friends paid for breakfast : ");
    	    scanf("%d",&temp);
    	    for(j=0;j<temp;j++)
    	    {
    		printf("\n\nWho paid for breakfast : ");
    		scanf("%s",&name);
    		printf("Enter amount paid by %s for breakfast : ",name);
    		scanf("%f",&t);
    		breakfast=breakfast+t;
        	
            if(strcmp(name,f1)==0)
            {
            	ab=ab+t;
        	}
         	else if(strcmp(name,f2)==0)
          	{
          		bb=bb+t;
            }
	        else if(strcmp(name,f3)==0)
          	{
	         	cb=cb+t;
           	}
           	else if(strcmp(name,f4)==0)
	    {
	    	db=db+t;
	    } 
	    else if(strcmp(name,f5)==0)
	    {
	    	eb=eb+t;
	    } 
	    else if(strcmp(name,f6)==0)
	    {
	    	fb=fb+t;
		}
           }
           	i=i+1;
           	printf("\nDetails of Breakfast have been recorded. Now specify some other number whose details have not been recorded.\n");
   	break;
		  	
	case(3):
			    printf("\nHow many friends paid for lunch : ");
    	    scanf("%d",&temp);
    	    for(j=0;j<temp;j++)
    	    {
    		printf("\n\nWho paid for lunch : ");
    		scanf("%s",&name);
    		printf("Enter amount paid by %s for lunch : ",name);
    		scanf("%f",&t);
    		lunch=lunch+t;
			  	
			  	if(strcmp(name,f1)==0)
			  	{
			  		ab=ab+t;
				}
				else if(strcmp(name,f2)==0)
          	    {
          	    	bb=bb+t;
                }
	            else if(strcmp(name,f3)==0)
          	    {
	            	cb=cb+t;
           	    }
           	    else if(strcmp(name,f4)==0)
	    {
	    	db=db+t;
	    } 
	    else if(strcmp(name,f5)==0)
	    {
	    	eb=eb+t;
	    } 
	    else if(strcmp(name,f6)==0)
	    {
	    	fb=fb+t;
		}
           	}
           	    i=i+1;
           	    printf("\nDetails of Lunch have been recorded. Now specify some other number whose details have not been recorded.\n");
    break;	
	
	case(4):
			  	 printf("\nHow many friends paid for movie : ");
    	    scanf("%d",&temp);
    	    for(j=0;j<temp;j++)
    	    {
    		printf("\n\nWho paid for movie : ");
    		scanf("%s",&name);
    		printf("Enter amount paid by %s for movie : ",name);
    		scanf("%f",&t);
    		movie=movie+t;
              	
                if(strcmp(name,f1)==0)
                {
                   	ab=ab+t;
             	}
               	else if(strcmp(name,f2)==0)
               	{
              		bb=bb+t;
            	}
            	else if(strcmp(name,f3)==0)
               	{
	             	cb=cb+t;
            	}
            	else if(strcmp(name,f4)==0)
	    {
	    	db=db+t;
	    } 
	    else if(strcmp(name,f5)==0)
	    {
	    	eb=eb+t;
	    } 
	    else if(strcmp(name,f6)==0)
	    {
	    	fb=fb+t;
		}
            }
            	i=i+1;
            	printf("\nDetails of Movie have been recorded. Now specify some other number whose details have not been recorded.\n");
	break;	
			
	case(5):
			     printf("\nHow many friends paid for dinner : ");
    	    scanf("%d",&temp);
    	    for(j=0;j<temp;j++)
    	    {
    		printf("\n\nWho paid for dinner : ");
    		scanf("%s",&name);
    		printf("Enter amount paid by %s for dinner : ",name);
    		scanf("%f",&t);
    		dinner=dinner+t;
				
				if(strcmp(name,f1)==0)
                {
                   	ab=ab+t;
             	}
               	else if(strcmp(name,f2)==0)
               	{
              		bb=bb+t;
            	}
            	else if(strcmp(name,f3)==0)
               	{
	             	cb=cb+t;
            	}
            	else if(strcmp(name,f4)==0)
	    {
	    	db=db+t;
	    } 
	    else if(strcmp(name,f5)==0)
	    {
	    	eb=eb+t;
	    } 
	    else if(strcmp(name,f6)==0)
	    {
	    	fb=fb+t;
		}
            }
            	i=i+1;
            	printf("\nDetails of Dinner have been recorded. Now specify some other number whose details have not been recorded.\n");
	break;
	
	default:
	printf("\nEnter valid number\n");			  	
	break;
	}
	}
    
	printf("\n %s spent Rs. %.2f\n",f1,ab);		
	printf("\n %s spent Rs. %.2f\n",f2,bb);             //(this displays the total amounyt spent by each individual)
	printf("\n %s spent Rs. %.2f\n",f3,cb);
	printf("\n %s spent Rs. %.2f\n",f4,db);		
	printf("\n %s spent Rs. %.2f\n",f5,eb);
	printf("\n %s spent Rs. %.2f\n\n",f6,fb);
	
	total=taxi+breakfast+lunch+movie+dinner;
	avg=total/6;
	printf("\nTotal amount spent during outing = Rs. %.2f \n",total);
	printf("\nEach should pay : %.2f\n\n",avg);
	
	ab=avg-ab;
	bb=avg-bb;
	cb=avg-cb;
	db=avg-db;
	eb=avg-eb;
	fb=avg-fb;
	
	if(ab<0)
		printf("%s should get : Rs. %.2f\n",f1,-(ab));
	else if(ab==0)
		printf("%s need not pay or get any money\n",f1);
	else if(ab>0)
	    printf("%s should pay : Rs. %.2f\n",f1,ab);

    if(bb<0)
		printf("%s should get : Rs. %.2f\n",f2,-(bb));
	else if(bb==00)
		printf("%s need not pay or get any money\n",f2);
	else if(bb>0)
	    printf("%s should pay : Rs. %.2f\n",f2,bb);
	    
	if(cb<0)
		printf("%s should get : Rs. %.2f\n",f3,-(cb));
	else if(cb==0)
		printf("%s need not pay or get any money\n",f3);
	else if(cb>0)
	    printf("%s should pay : Rs. %.2f\n",f3,cb);
	    
	if(db<0)
		printf("%s should get : Rs. %.2f\n",f4,-(db));
	else if(db==0)
		printf("%s need not pay or get any money\n",f4);
	else if(db>0)
	    printf("%s should pay : Rs. %.2f\n",f4,db);
		
	if(eb<0)
		printf("%s should get : Rs. %.2f\n",f5,-(eb));
	else if(eb==0)
		printf("%s need not pay or get any money\n",f3);
	else if(eb>0)
	    printf("%s should pay : Rs. %.2f\n",f5,eb);
		
	if(fb<0)
		printf("%s should get : Rs. %.2f\n",f6,-(fb));
	else if(fb==0)
		printf("%s need not pay or get any money\n",f3);
	else if(fb>0)
	    printf("%s should pay : Rs. %.2f\n",f6,fb);	    

	return 0;
}	
	

