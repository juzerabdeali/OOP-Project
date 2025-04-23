#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Product {
    string code;
    string name;
    double price;
    int quantity;
};

void saveData(const vector<Product>& products, const string& filename) {
    ofstream file(filename, ios::app); 

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }


    file.seekp(0, ios::end);
    bool isEmpty = (file.tellp() == 0);
    file.seekp(0, ios::beg);


    if (isEmpty) {
        file << "Code " << "Name " << "Price " << "Quantity" << endl;
    }

    for (const auto& product : products) {
        file << product.code << " " << product.name << " " << fixed << setprecision(2) << product.price << product.quantity << endl;
    }

    file.close();

    cout << "Data appended successfully to " << filename << endl;
}



int main() {
	do{
		system("cls");
    vector<Product> products;
    
    string filename;
    string cafeteria = "Cafeteria.txt";
    string fast_dhabba = "Fast_Dhabba.txt";
	string fast_juice_bar = "Fast_Juice_Bar.txt";
	string fast_shawarma = "Fast_shawarma.txt";
	string pizza_fast = "Pizza_Fast.txt"; 
	string restuarants[] = {cafeteria, fast_dhabba, fast_juice_bar, fast_shawarma, pizza_fast};
	int choice = 0;
	
	
	for(int i=0; i<5; i++){
		cout << i+1 << ". " << restuarants[i] << endl;
	}
	cout << "6. Exit" << endl;
    cout << endl << "Enter Restuarant index: ";
    cin >> choice;
    choice--;
    
    if(choice >= 5)
    	break;
	else
    	filename = restuarants[choice];

    char addMore;
    do {
        Product newProduct;
        cout << "Enter product code: ";
        cin >> newProduct.code;
        cin.ignore();
        cout << "Enter product name: ";
        getline(cin, newProduct.name);
        cout << "Enter product price: ";
        cin >> newProduct.price;

        products.push_back(newProduct);

        cout << "Do you want to add another product? (y/n): ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    
    saveData(products, filename);
    cout << "Data Succefully Saved to File " << filename << endl;
    sleep(1);
	}while(true);

    return 0;
}
