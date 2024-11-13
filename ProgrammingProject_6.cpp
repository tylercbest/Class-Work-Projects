#include <iostream>

using namespace std;

struct product_info{
    char name[20], category[20], supplier_name[20];
    float price;
    int quantity;
};
product_info addProduct();
void displayProduct(product_info);

int main(){
    product_info myProducts[3];

    int len = sizeof(myProducts)/sizeof(myProducts[0]);

    for(int i = 0; i< len; i++){
        cout << "Product " << (i + 1) << " details: " << endl;
        myProducts[i] = addProduct();
    }
    cout << endl << endl << "Available products: " << endl;

    int counter = 0;

    while(counter < 3){
        cout << "Product " << (counter +1) << " details: " << endl;
        displayProduct(myProducts[counter]);
        counter++;
    }

    return 0;
}

product_info addProduct(){
    product_info myProduct;
    cout << "Please enter name of product: ";
    cin >> myProduct.name;

    cout << "Please enter product category: ";
    cin >> myProduct.category;

    cout << "Please enter product price: $";
    cin >> myProduct.price;

    cout << "Please enter product quantity: ";
    cin >> myProduct.quantity;

    cout << "Please enter product supplier: ";
    cin >> myProduct.supplier_name;

    cout << endl;

    return myProduct;
}

void displayProduct(product_info myProduct){
    cout << "Product: " << myProduct.name << endl;
    cout << "Product Category: " << myProduct.category << endl;
    cout << "Price: " << myProduct.price << endl;
    cout << "Quantity: " << myProduct.quantity << endl;
    cout << "Supplier Name: " << myProduct.supplier_name << endl;
    cout << endl;
}