#include <iostream>
int main()
{
      std::cout.precision(2);
      std::cout << std::fixed;

      std::cout << "============================\nWELCOME TO THE RESTAURANT\n============================\n";

    char salad;
    std::cout << "Do you want a salad? (y/n): ";
    std::cin >> salad;
    int salad_quantity = 0;

  if (salad == 'y' || salad == 'Y')
    {
      std::cout << "How many?: ";
      std::cin >> salad_quantity;
      std::cout << '\n';
    }
  else
  {
    std::cout << '\n';
  }

    char pizza;
    std::cout << "Do you want a Pizza? (y/n): ";
    std::cin >> pizza;
    int pizza_quantity = 0;

  if (pizza == 'y' || pizza == 'Y')
    {
      std::cout << "How many: ";
      std::cin >> pizza_quantity;
      std::cout << '\n';
    }
  else
  {
    std::cout << '\n';
  }

    char icecream;
    std::cout << "Do you want an Ice Cream? (y/n): ";
    std::cin >> icecream;
    int icecream_quantity = 0;

  if (icecream == 'y' || icecream == 'Y')
    {
      std::cout << "How many?: ";
      std::cin >> icecream_quantity;
      std::cout << '\n';
    }
  else
   {
     std::cout << '\n';
   }

    int age;
    std::cout << "How old are you?: ";
    std::cin >> age;

  std::cout << "============================\n";

  /**********************
  *End of inital part. Beginning totals
  ******************************/

      double stotal = (3.50 * salad_quantity);
      double ptotal = (7.25 * pizza_quantity);
      double itotal = (5.50 * icecream_quantity);

    std::cout << salad_quantity << " @ $3.50 ==> $" << stotal << '\n';
    std::cout << pizza_quantity << " @ $7.50 ==> $" << ptotal << '\n';
    std::cout << icecream_quantity << " @ $5.50 ==> $" << itotal << '\n';

  double subtotal = (stotal + ptotal + itotal);

    if (age <= 8)
      {
        subtotal = (subtotal - itotal);
        std::cout << "Subtotal: $" << subtotal << '\n';
        std::cout << "Tax: $" << (subtotal * 0.25) << '\n';
        std::cout << "Discount: $" << itotal << '\n';

      }

    else
    {
      std::cout << "Subtotal: $" << subtotal << '\n';
      std::cout << "Tax: $" << (subtotal * .25) << '\n';
    }

      double total = (subtotal + (subtotal * 0.25));

    if (age >= 55)
      {
        std::cout << "Discount: 10% Off!\n";
        total = ((subtotal + (subtotal * 0.25)) * 0.90);
      }


    std::cout << "============================\n";

    std::cout << "Total: $" << total << '\n';
    std::cout << "\nPlease come again!\n";


    return (0);
}
