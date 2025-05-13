import java.util.*;

class InputDemo
{
    public static void main(String A[])
    {
        @SuppressWarnings("resource")
        Scanner sobj = new Scanner(System.in);
        
        int No1 = 0, No2 = 0, Ans = 0;

        System.out.println("Enter First Number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        No2 = sobj.nextInt();

        Ans = No1 + No2;

        System.out.println("Addition is : "+Ans);

    }
}

/* 
        Data Type       Method from Scanner class
        --------------------------------------------
        boolean         nextBoolean()
        byte            nextByte()
        int             nextInt()
        float           nextFloat()
        double          nextDouble()
        short           nextShort()
        long            nextLong()
        String          nextLine()
 */