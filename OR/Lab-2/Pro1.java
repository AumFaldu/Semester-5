public class Pro1{
    public static void main(String[] args) {
        int z=0,X1=0,X2=0;
        for(int x1=0;x1<=4;x1++){
            for(int x2=0;x2<=4-x1;x2++){
                if(z<3*x1+2*x2){
                    z=3*x1+2*x2;
                    X1=x1;
                    X2=x2;
                }
            }
        }
        System.out.println("Maximum Value of Z = "+z);
        System.out.println("Value of x1 = "+X1+"\nValue of x2 = "+X2);
    }
}