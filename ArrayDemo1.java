

class ArrayDemo1
{
    public static void main(String Arg[])
    {
        int Arr1[] = {10,20,30,40}; // Static

        System.out.println(Arr1[0]);
        System.out.println(Arr1[1]);
        System.out.println(Arr1[2]);
        System.out.println(Arr1[3]);
        
        System.out.println(Arr1.length);

        int Arr2[] = new int[4];    // Dynamic
        Arr2[0] = 10;
        Arr2[1] = 10;
        Arr2[2] = 10;
        Arr2[3] = 10;

        System.out.println(Arr2.length);
    }
}