public class calculadora
{
    public static void main(String[] args)
    {
        System.out.println("Digite os valores ");
        int op = Integer.parseInt(System.console().readLine());
        System.out.println("Digite o primeiro valor: ");
        int a = Integer.parseInt(System.console().readLine());
        System.out.println("Digite o segundo valor: ");
        int b = Integer.parseInt(System.console().readLine());

        if (op == 1)
            System.out.println("Resultado: " + (a + b));
        else if (op == 2)
            System.out.println("Resultado: " + (a - b));
        else if (op == 3)
            System.out.println("Resultado: " + (a * b));
        else if (op == 4)
            System.out.println("Resultado: " + (a / b));
        else
            System.out.println("Operacao invalida!");

    }
}


