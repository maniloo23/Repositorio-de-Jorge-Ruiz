using System;

class Calculadora
{
    static void Main()
    {
        bool continuar = true;

        while (continuar)
        {
            Console.Clear();
            Console.WriteLine("Calculadora Simple");
            Console.WriteLine("------------------");

            double num1, num2;

            while (true)
            {
                Console.Write("Ingrese el primer número: ");
                if (double.TryParse(Console.ReadLine(), out num1))
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Error: Debes ingresar un número.");
                }
            }

            while (true)
            {
                Console.Write("Ingrese el segundo número: ");
                if (double.TryParse(Console.ReadLine(), out num2))
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Error: Debes ingresar un número.");
                }
            }

            int opcion;
            while (true)
            {
                Console.WriteLine("Seleccione una operación:");
                Console.WriteLine("1. Suma");
                Console.WriteLine("2. Resta");
                Console.WriteLine("3. Multiplicación");
                Console.WriteLine("4. División");
                Console.Write("Opción: ");
                if (int.TryParse(Console.ReadLine(), out opcion) && (opcion >= 1 && opcion <= 4))
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Error: Debes seleccionar una opción válida (1, 2, 3, o 4).");
                }
            }

            double resultado = 0;

            switch (opcion)
            {
                case 1:
                    resultado = num1 + num2;
                    Console.WriteLine($"El resultado de la suma es: {resultado}");
                    break;
                case 2:
                    resultado = num1 - num2;
                    Console.WriteLine($"El resultado de la resta es: {resultado}");
                    break;
                case 3:
                    resultado = num1 * num2;
                    Console.WriteLine($"El resultado de la multiplicación es: {resultado}");
                    break;
                case 4:
                    if (num2 != 0)
                    {
                        resultado = num1 / num2;
                        Console.WriteLine($"El resultado de la división es: {resultado}");
                    }
                    else
                    {
                        Console.WriteLine("Error: No se puede dividir por cero.");
                    }
                    break;
                default:
                    Console.WriteLine("Opción no válida.");
                    break;
            }

            while (true)
            {
                Console.Write("¿Desea realizar otra operación? (s/n): ");
                string continuarRespuesta = Console.ReadLine().ToLower();

                if (continuarRespuesta == "s")
                {
                    continuar = true;
                    break;
                }
                else if (continuarRespuesta == "n")
                {
                    continuar = false;
                    break;
                }
                else
                {
                    Console.WriteLine("Error: Seleccione una respuesta válida.");
                }
            }
        }

        Console.WriteLine("Gracias por usar la calculadora.");
    }
}
