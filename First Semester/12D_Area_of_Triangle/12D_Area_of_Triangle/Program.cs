using System;

namespace _12D_Area_of_Triangle
{
    class Program
    {
        static void Main(string[] args)
        {
            string answer = "yes";

            while (answer == "yes")
            {
                Console.Clear();

                Console.WriteLine("Please enter the 3 sides of your triangle");

                double a, b, c;

                Console.Write("A = ");
                bool aIsValid = double.TryParse(Console.ReadLine(), out a);

                Console.Write("B = ");
                bool bIsValid = double.TryParse(Console.ReadLine(), out b);

                Console.Write("C = ");
                bool cIsValid = double.TryParse(Console.ReadLine(), out c);

                bool sidesAreValid = aIsValid && bIsValid && cIsValid;
                bool sidesArePositive = a > 0 && b > 0 && c > 0;
                bool triangleIsValid = a + b > c && b + c > a && a + c > b;

                if (sidesArePositive && triangleIsValid)
                {
                    double semiPerimeter = CalculateSemiPerimeter(a, b, c);

                    double area = CalculateArea(a, b, c, semiPerimeter);

                    Console.WriteLine($"Area: {area:f1}cm^2");
                }
                else
                {
                    Console.WriteLine("Invalid input");

                    if (!sidesAreValid)
                    {
                        Console.WriteLine("The side must be numbers");
                    }

                    if (!sidesArePositive)
                    {
                        Console.WriteLine("Sides must be positive!");
                    }

                    if (!triangleIsValid)
                    {
                        Console.WriteLine("The sides must form a valid triangle");
                    }
                }


                Console.WriteLine("Would you like to enter another triangle? (yes)");
                answer = Console.ReadLine().ToLower();
            }
        }

        private static double CalculateSemiPerimeter(double a, double b, double c)
        {
            return (a + b + c) / 2;
        }

        private static double CalculateArea(double a, double b, double c, double semiPerimeter)
        {
            return Math.Sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
        }
    }
}
