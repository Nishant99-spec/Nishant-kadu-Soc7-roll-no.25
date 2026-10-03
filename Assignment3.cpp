#include <iostream>
using namespace std;

class Product
{
public:
    string name;
    float price;
    int monthlySales[12];   // array to store sales for 12 months

    void getData()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter product price: ";
        cin >> price;

        cout << "Enter sales quantity for 12 months:\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << (i + 1) << ": ";
            cin >> monthlySales[i];
        }
    }

    int getTotalQuantity()
    {
        int total = 0;
        for (int i = 0; i < 12; i++)
        {
            total = total + monthlySales[i];
        }
        return total;
    }

    float getTotalBill()
    {
        return getTotalQuantity() * price;
    }

    void display()
    {
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: " << price;
        cout << "\nTotal Quantity Sold: " << getTotalQuantity();
        cout << "\nTotal Bill: " << getTotalBill();
        cout << "\n------------------------------\n";
    }
};

int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product p[10];   // array of product objects (max 10 products)

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of product " << (i + 1) << ":\n";
        p[i].getData();
    }

    cout << "\n===== PRODUCT DETAILS =====\n";
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }

    return 0;
}