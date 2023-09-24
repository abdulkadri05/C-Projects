#include <iostream>
using namespace std;

class Currency {
public:
    void startUp() {
        cout << "Currency Converter" << endl;
        cout << "---------------------------" << endl;
        cout << "Available Currencies: " << endl;
        cout << "1. NOK - Norwegian Currency" << endl;
        cout << "2. USD - USA Currency" << endl;
        cout << "3. Pound - UK Currency" << endl;
    }

    char chooseCurrency() {
        char curr;
        cout << "What currency do you want to convert from: " << endl;
        cout << "Enter the number: ";
        cin >> curr;
        return curr;
    }

    char toCurrency() {
        char curr;
        cout << "What currency are you converting to: " << endl;
        cout << "Enter the number: ";
        cin >> curr;
        return curr;
    }

    double converter(double amount, char from, char to) {
        // Define exchange rates for conversion
        double nokToUsd = 0.1;
        double nokToPound = 0.085;
        double usdToNok = 10.0;
        double usdToPound = 0.72;
        double poundToNok = 11.76;
        double poundToUsd = 1.39;

        // Perform the conversion
        if (from == '1' && to == '2') {
            return amount * nokToUsd;
        }
        else if (from == '1' && to == '3') {
            return amount * nokToPound;
        }
        else if (from == '2' && to == '1') {
            return amount * usdToNok;
        }
        else if (from == '2' && to == '3') {
            return amount * usdToPound;
        }
        else if (from == '3' && to == '1') {
            return amount * poundToNok;
        }
        else if (from == '3' && to == '2') {
            return amount * poundToUsd;
        }
        else {
            // Invalid currency selection
            cout << "Invalid currency selection." << endl;
            return -1.0; // You can choose a different value to represent an error.
        }
    }
};

int main() {
    Currency currency;
    currency.startUp();

    char fromCurrency = currency.chooseCurrency();
    char toCurrency = currency.toCurrency();
    
    double amount;
    cout << "Enter the amount: ";
    cin >> amount;

    double convertedAmount = currency.converter(amount, fromCurrency, toCurrency);

    if (convertedAmount >= 0.0) {
        cout << "Converted amount: " << convertedAmount << endl;
    }

    return 0;
}
