class StringDemo2
{
    @SuppressWarnings("unused")
    public static void main(String A[])
    {
        StringBuffer s1 = new StringBuffer("Marvellous");
        StringBuilder s2 = new StringBuilder("Marvellous");

        s1.append("\tInfosystems");
        
        System.out.println(s1); 
    }
}