import java.lang.*;
class LinearSearch{
int i,n=5,key=40;
int a[]={10,20,30,40,50};
int search()
{
for(i=0;i<n;i++)
{
if(key==a[i])
return i+1;
}
return -1;
}

public static void main(String[] args){
LinearSearch obj1=new LinearSearch();
int k=obj1.search();
if(k==-1)
System.out.println("Element not found");
else
System.out.println("Element found at position:"+k);
}
}