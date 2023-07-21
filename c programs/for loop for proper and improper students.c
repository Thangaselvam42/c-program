#include<stdio.h>
int main()
{
	int ast,mst,ap=0,mp=0,mi=0,ai,mper=0,aper=0,c,i;
	scanf("%d%d",&ast,&mst);
	for(i=1;i<=ast;i++){
		scanf("%d",&c);
		if(c==1)
		ap=ap+1;
		else if(c=0)
		ap=ai+1;
			}
			for(i=1;i<=ast;i++)
			{
				scanf("%d",&c);
				if (c==1)
				mp=mp+1;
				else if(c==0)
				mi=mi+1;
			}
			aper=(ap/ast)/100;
			mper=(mp/mst)/100;
			printf("proper students in agri %d",ap);
			printf("proper students in mech %d",mp);
			printf("percentage in agri %d",aper);
			printf("percentage in mech %d",mper);
			printf("improper student in agri %d",ai);
			printf("improper students in mech %d",mi);
}
