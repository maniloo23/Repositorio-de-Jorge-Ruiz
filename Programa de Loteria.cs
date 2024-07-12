using System;

class Loteria
{
    static void Main(string[] args)
    {
        Random random = new Random();
        int[] numerosGanadores = new int[5];
        int numeroEspecial;

        // Generar 5 números ganadores únicos entre 1 y 50
        for (int i = 0; i < 5; i++)
        {
            int numero;
            do
            {
                numero = random.Next(1, 51);
            } while (Array.Exists(numerosGanadores, n => n == numero));
            numerosGanadores[i] = numero;
        }

        // Generar el número especial entre 1 y 10
        numeroEspecial = random.Next(1, 11);

        // Ordenar los números ganadores
        Array.Sort(numerosGanadores);

        // Mostrar los números ganadores
        Console.WriteLine("Números ganadores:");
        foreach (int num in numerosGanadores)
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();

        // Solicitar al usuario que ingrese sus números
        int[] numerosUsuario = new int[5];
        Console.WriteLine("Ingrese sus 5 números (entre 1 y 50):");
        for (int i = 0; i < 5; i++)
        {
            int numero;
            while (true)
            {
                Console.Write("Número " + (i + 1) + ": ");
                string input = Console.ReadLine();
                if (int.TryParse(input, out numero))
                {
                    if (numero < 1 || numero > 50)
                    {
                        Console.WriteLine("Número fuera de rango. Por favor, ingrese un número entre 1 y 50.");
                    }
                    else if (Array.Exists(numerosUsuario, n => n == numero))
                    {
                        Console.WriteLine("Número repetido. Por favor, ingrese un número único.");
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    Console.WriteLine("Entrada inválida. Por favor, ingrese un número válido.");
                }
            }
            numerosUsuario[i] = numero;
        }

        // Solicitar al usuario que ingrese su número especial
        int numeroEspecialUsuario;
        while (true)
        {
            Console.Write("Ingrese su número especial (entre 1 y 10): ");
            string input = Console.ReadLine();
            if (int.TryParse(input, out numeroEspecialUsuario))
            {
                if (numeroEspecialUsuario < 1 || numeroEspecialUsuario > 10)
                {
                    Console.WriteLine("Número fuera de rango. Por favor, ingrese un número entre 1 y 10.");
                }
                else
                {
                    break;
                }
            }
            else
            {
                Console.WriteLine("Entrada inválida. Por favor, ingrese un número válido.");
            }
        }

        // Calcular el número de aciertos
        int aciertos = 0;
        foreach (int num in numerosUsuario)
        {
            if (Array.Exists(numerosGanadores, n => n == num))
            {
                aciertos++;
            }
        }

        // Mostrar los resultados de los números principales
        Console.WriteLine("\nResultados:");
        Console.WriteLine("Números acertados: " + aciertos);

        // Determinar si el usuario ha ganado algún premio
        if (aciertos == 5 && numeroEspecial == numeroEspecialUsuario)
        {
            Console.WriteLine("¡Felicidades! ¡Ha ganado el premio mayor con el número especial: " + numeroEspecial + "!");
        }
        else if (aciertos == 5)
        {
            Console.WriteLine("¡Felicidades! Ha acertado todos los números principales, pero no el número especial.");
        }
        else if (aciertos >= 3)
        {
            Console.WriteLine("Ha ganado un premio menor.");
        }
        else
        {
            Console.WriteLine("No ha ganado ningún premio.");
        }
    }
}

