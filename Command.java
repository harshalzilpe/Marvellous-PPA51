
class Command
{
    public static void main(String Arg[])
    {
        System.out.println("Number of command line arguments are : "+Arg.length);

        for(int i = 0; i < Arg.length; i++)
        {
            System.out.println(Arg[i]);
        }
    }
}

// javac Command.java
// java command Hello 21 Marvellous

/* Number of command line arguments are : 3
Hello
21
Marvellous
*/