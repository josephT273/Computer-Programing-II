#include<iostream>

using namespace std;

int main(){
    int quantity;
    
    do
    {
        cout << "Enter the item quantity: ";
        cin >> quantity;
    } while (quantity == 0);

    int itemId[quantity];
    int stockLevel[quantity];
    int restockThreshold[quantity];
        
    for(int i = 0; i < quantity; i++){
        cout << "Enter Item Id for Item " << i + 1<< ": ";
        cin >> itemId[i];
        cout << "Enter Stock level for Item " << i + 1<< ": ";
        cin >> stockLevel[i];
        cout << "Enter restock Threshold for Item " << i + 1<< ": ";
        cin >> restockThreshold[i];        
    }

    for (int j = 0; j < quantity; j++)
    {
        if (stockLevel[j] < restockThreshold[j])
        {
            cout << "Restocking Item: " << itemId[j] << " Order: " << restockThreshold[j] - stockLevel[j] << endl;
        }       
    }
    
    return 0;
}