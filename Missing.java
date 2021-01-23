import java.util.*;
public class Missing {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        long n=sc.nextLong(), sum=0;
        for(int i=1; i<n; i++)
            sum+=sc.nextLong();
        long result=n*(n+1)/2-sum;
        System.out.print(result);    
        sc.close();    
    }
}
