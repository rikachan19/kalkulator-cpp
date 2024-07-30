#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
using namespace std;

int getOperatorPriority(char op) {
    if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

double applyOperation(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            return 0.0;
    }
}

double evaluateExpression(string expression) {
    stack<double> numbers;
    stack<char> operators;

    string num;
    for (char c : expression) {
        if (isdigit(c) || c == '.') {
            num += c;
        } else {
            if (!num.empty()) {
                double number = stod(num);
                numbers.push(number);
                num.clear();
            }

            if (c == '+' || c == '-' || c == '*' || c == '/') {
                while (!operators.empty() && getOperatorPriority(operators.top()) >= getOperatorPriority(c)) {
                    double num2 = numbers.top();
                    numbers.pop();
                    double num1 = numbers.top();
                    numbers.pop();
                    char op = operators.top();
                    operators.pop();
                    numbers.push(applyOperation(num1, num2, op));
                }
                operators.push(c);
            }
        }
    }

    if (!num.empty()) {
        double number = stod(num);
        numbers.push(number);
    }

    while (!operators.empty()) {
        double num2 = numbers.top();
        numbers.pop();
        double num1 = numbers.top();
        numbers.pop();
        char op = operators.top();
        operators.pop();
        numbers.push(applyOperation(num1, num2, op));
    }

    if (!numbers.empty())
        return numbers.top();
    else{
            cout << "Pilihan tidak valid." << endl;
    }
    
    return 0.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double celsiusToReamur(double celsius) {
    return celsius * 4 / 5;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5 / 9;
}

double fahrenheitToReamur(double fahrenheit) {
    return (fahrenheit - 32) * 4 / 9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9 / 5) - 459.67;
}

double kelvinToReamur(double kelvin) {
    return (kelvin - 273.15) * 4 / 5;
}

double reamurToCelsius(double reamur) {
    return reamur * 5 / 4;
}

double reamurToFahrenheit(double reamur) {
    return (reamur * 9 / 4) + 32;
}

double reamurToKelvin(double reamur) {
    return (reamur * 5 / 4) + 273.15;
}

double gramToKilogram(double gram) {
    return gram / 1000;
}

double kilogramToGram(double kilogram) {
    return kilogram * 1000;
}

double gramToPound(double gram) {
    return gram * 0.00220462;
}

double poundToGram(double pound) {
    return pound / 0.00220462;
}

double kilogramToPound(double kilogram) {
    return kilogram * 2.20462;
}

double poundToKilogram(double pound) {
    return pound / 2.20462;
}

double kilogramToHectogram(double kilogram) {
    return kilogram * 10;
}

double kilogramToDekagram(double kilogram) {
    return kilogram * 100;
}

double kilogramToGram2(double kilogram) {
    return kilogram * 1000;
}

double kilogramToDecigram(double kilogram) {
    return kilogram * 10000;
}

double kilogramToCentigram(double kilogram) {
    return kilogram * 100000;
}

double kilogramToMilligram(double kilogram) {
    return kilogram * 1000000;
}

double hectogramToKilogram(double hectogram) {
    return hectogram / 10;
}

double dekagramToKilogram(double dekagram) {
    return dekagram / 100;
}

double decigramToKilogram(double decigram) {
    return decigram / 10000;
}

double centigramToKilogram(double centigram) {
    return centigram / 100000;
}

double milligramToKilogram(double milligram) {
    return milligram / 1000000;
}

double kilometerToMeter(double kilometer) {
    return kilometer * 1000;
}

double kilometerToHectometer(double kilometer) {
    return kilometer * 10;
}

double kilometerToDekameter(double kilometer) {
    return kilometer * 100;
}

double kilometerToCentimeter(double kilometer) {
    return kilometer * 100000;
}

double kilometerToMillimeter(double kilometer) {
    return kilometer * 1000000;
}

double meterToKilometer(double meter) {
    return meter / 1000;
}

double meterToHectometer(double meter) {
    return meter / 100;
}

double meterToDekameter(double meter) {
    return meter / 10;
}

double meterToCentimeter(double meter) {
    return meter * 100;
}

double meterToMillimeter(double meter) {
    return meter * 1000;
}

double hectometerToKilometer(double hectometer) {
    return hectometer / 10;
}

double hectometerToMeter(double hectometer) {
    return hectometer * 100;
}

double hectometerToDekameter(double hectometer) {
    return hectometer * 10;
}

double hectometerToCentimeter(double hectometer) {
    return hectometer * 10000;
}

double hectometerToMillimeter(double hectometer) {
    return hectometer * 100000;
}

double dekameterToKilometer(double dekameter) {
    return dekameter / 100;
}

double dekameterToMeter(double dekameter) {
    return dekameter * 10;
}

double dekameterToHectometer(double dekameter) {
    return dekameter / 10;
}

double dekameterToCentimeter(double dekameter) {
    return dekameter * 1000;
}

double dekameterToMillimeter(double dekameter) {
    return dekameter * 10000;
}

double centimeterToKilometer(double centimeter) {
    return centimeter / 100000;
}

double centimeterToMeter(double centimeter) {
    return centimeter / 100;
}

double centimeterToHectometer(double centimeter) {
    return centimeter / 10000;
}

double centimeterToDekameter(double centimeter) {
    return centimeter / 1000;
}

double centimeterToMillimeter(double centimeter) {
    return centimeter * 10;
}

double millimeterToKilometer(double millimeter) {
    return millimeter / 1000000;
}

double millimeterToMeter(double millimeter) {
    return millimeter / 1000;
}

double millimeterToHectometer(double millimeter) {
    return millimeter / 100000;
}

double millimeterToDekameter(double millimeter) {
    return millimeter / 10000;
}

double millimeterToCentimeter(double millimeter) {
    return millimeter / 10;
}

double kalkulatorBMI(double weight, double height) {
    return weight / pow(height, 2);
}

void operatorMatematika() {
    char choice;
    do {
        string expression;

        cout << "===========================" << endl;
        cout << "=== Operator Matematika ===" << endl;
        cout << "===========================" << endl;
        cout << "Masukkan angka dan operator matematika: ";
        getline(cin, expression);

        double result = evaluateExpression(expression);

        cout << "Hasil: " << result << endl;

        do {
            cout << "Ingin menghitung operator matematika lagi? (y/t): ";
            cin >> choice;
            cin.ignore();

            if (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T') {
                cout << "Pilihan tidak valid." << endl;
            }
        } while (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T');
        
        if (choice == 't' || choice == 'T') {
            cout << "\nTerima kasih!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');
}

void konversiSuhu() {
    char choice;

    do {
        double temperature;
        int conversionType;

        cout << "=====================" << endl;
        cout << "=== Konversi Suhu ===" << endl;
        cout << "=====================" << endl;
        cout << "1. Celsius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Kelvin" << endl;
        cout << "4. Reamur" << endl;
        cout << "Pilih jenis konversi: ";
        cin >> conversionType;

        if (conversionType == 1) {
            cout << "Masukkan suhu dalam Celsius: ";
            cin >> temperature;
            cout << "Suhu dalam Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
            cout << "Suhu dalam Kelvin: " << celsiusToKelvin(temperature) << endl;
            cout << "Suhu dalam Reamur: " << celsiusToReamur(temperature) << endl;
        } else if (conversionType == 2) {
            cout << "Masukkan suhu dalam Fahrenheit: ";
            cin >> temperature;
            cout << "Suhu dalam Celsius: " << fahrenheitToCelsius(temperature) << endl;
            cout << "Suhu dalam Kelvin: " << fahrenheitToKelvin(temperature) << endl;
            cout << "Suhu dalam Reamur: " << fahrenheitToReamur(temperature) << endl;
        } else if (conversionType == 3) {
            cout << "Masukkan suhu dalam Kelvin: ";
            cin >> temperature;
            cout << "Suhu dalam Celsius: " << kelvinToCelsius(temperature) << endl;
            cout << "Suhu dalam Fahrenheit: " << kelvinToFahrenheit(temperature) << endl;
            cout << "Suhu dalam Reamur: " << kelvinToReamur(temperature) << endl;
        } else if (conversionType == 4) {
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> temperature;
            cout << "Suhu dalam Celsius: " << reamurToCelsius(temperature) << endl;
            cout << "Suhu dalam Fahrenheit: " << reamurToFahrenheit(temperature) << endl;
            cout << "Suhu dalam Kelvin: " << reamurToKelvin(temperature) << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }

        do {
            cout << "Ingin konversi suhu lagi? (y/t): ";
            cin >> choice;
            cin.ignore();

            if (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T') {
                cout << "Pilihan tidak valid." << endl;
            }
        } while (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T');
        
        if (choice == 't' || choice == 'T') {
            cout << "\nTerima kasih!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');
}

void konversiBerat() {
    char choice;

    do {
        double weight;
        int conversionType;

        cout << "======================" << endl;
        cout << "=== Konversi Berat ===" << endl;
        cout << "======================" << endl;
		cout << "1. Gram (g)" << endl;
		cout << "2. Kilogram (kg)" << endl;
		cout << "3. Pound" << endl;
		cout << "4. Hektogram (hg)" << endl;
		cout << "5. Dekagram (dag)" << endl;
		cout << "6. Desigram (d)" << endl;
		cout << "7. Centigram (cg)" << endl;
		cout << "8. Miligram (mg)" << endl;
		cout << "Pilih jenis konversi: ";
		cin >> conversionType;
		
        if (conversionType == 1) {
        cout << "Masukkan berat dalam Gram: ";
        cin >> weight;
        cout << "Berat dalam Kilogram: " << gramToKilogram(weight) << endl;
        cout << "Berat dalam Pound: " << gramToPound(weight) << endl;
        cout << "Berat dalam Hektogram: " << kilogramToHectogram(gramToKilogram(weight)) << endl;
        cout << "Berat dalam Dekagram: " << kilogramToDekagram(gramToKilogram(weight)) << endl;
        cout << "Berat dalam Desigram: " << kilogramToDecigram(gramToKilogram(weight)) << endl;
        cout << "Berat dalam Centigram: " << kilogramToCentigram(gramToKilogram(weight)) << endl;
        cout << "Berat dalam Miligram: " << kilogramToMilligram(gramToKilogram(weight)) << endl;
	    } else if (conversionType == 2) {
	        cout << "Masukkan berat dalam Kilogram: ";
	        cin >> weight;
	        cout << "Berat dalam Gram: " << kilogramToGram(weight) << endl;
	        cout << "Berat dalam Pound: " << kilogramToPound(weight) << endl;
	        cout << "Berat dalam Hektogram: " << kilogramToHectogram(weight) << endl;
	        cout << "Berat dalam Dekagram: " << kilogramToDekagram(weight) << endl;
	        cout << "Berat dalam Desigram: " << kilogramToDecigram(weight) << endl;
	        cout << "Berat dalam Centigram: " << kilogramToCentigram(weight) << endl;
	        cout << "Berat dalam Miligram: " << kilogramToMilligram(weight) << endl;
	    } else if (conversionType == 3) {
	        cout << "Masukkan berat dalam Pound: ";
	        cin >> weight;
	        cout << "Berat dalam Gram: " << poundToGram(weight) << endl;
	        cout << "Berat dalam Kilogram: " << poundToKilogram(weight) << endl;
	        cout << "Berat dalam Hektogram: " << kilogramToHectogram(poundToKilogram(weight)) << endl;
	        cout << "Berat dalam Dekagram: " << kilogramToDekagram(poundToKilogram(weight)) << endl;
	        cout << "Berat dalam Desigram: " << kilogramToDecigram(poundToKilogram(weight)) << endl;
	        cout << "Berat dalam Centigram: " << kilogramToCentigram(poundToKilogram(weight)) << endl;
	        cout << "Berat dalam Miligram: " << kilogramToMilligram(poundToKilogram(weight)) << endl;
	    } else if (conversionType == 4) {
	        cout << "Masukkan berat dalam Hektogram: ";
	        cin >> weight;
	        cout << "Berat dalam Kilogram: " << hectogramToKilogram(weight) << endl;
	        cout << "Berat dalam Gram: " << kilogramToGram(hectogramToKilogram(weight)) << endl;
	        cout << "Berat dalam Pound: " << kilogramToPound(hectogramToKilogram(weight)) << endl;
	        cout << "Berat dalam Dekagram: " << kilogramToDekagram(hectogramToKilogram(weight)) << endl;
	        cout << "Berat dalam Desigram: " << kilogramToDecigram(hectogramToKilogram(weight)) << endl;
	        cout << "Berat dalam Centigram: " << kilogramToCentigram(hectogramToKilogram(weight)) << endl;
	        cout << "Berat dalam Miligram: " << kilogramToMilligram(hectogramToKilogram(weight)) << endl;
	    } else if (conversionType == 5) {
	        cout << "Masukkan berat dalam Dekagram: ";
	        cin >> weight;
	        cout << "Berat dalam Kilogram: " << dekagramToKilogram(weight) << endl;
	        cout << "Berat dalam Gram: " << kilogramToGram(dekagramToKilogram(weight)) << endl;
	        cout << "Berat dalam Pound: " << kilogramToPound(dekagramToKilogram(weight)) << endl;
	        cout << "Berat dalam Hektogram: " << kilogramToHectogram(dekagramToKilogram(weight)) << endl;
	        cout << "Berat dalam Desigram: " << kilogramToDecigram(dekagramToKilogram(weight)) << endl;
	        cout << "Berat dalam Centigram: " << kilogramToCentigram(dekagramToKilogram(weight)) << endl;
	        cout << "Berat dalam Miligram: " << kilogramToMilligram(dekagramToKilogram(weight)) << endl;
	    } else if (conversionType == 6) {
	        cout << "Masukkan berat dalam Desigram: ";
	        cin >> weight;
	        cout << "Berat dalam Kilogram: " << decigramToKilogram(weight) << endl;
	        cout << "Berat dalam Gram: " << kilogramToGram(decigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Pound: " << kilogramToPound(decigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Hektogram: " << kilogramToHectogram(decigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Dekagram: " << kilogramToDekagram(decigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Centigram: " << kilogramToCentigram(decigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Miligram: " << kilogramToMilligram(decigramToKilogram(weight)) << endl;
	    } else if (conversionType == 7) {
	        cout << "Masukkan berat dalam Centigram: ";
	        cin >> weight;
	        cout << "Berat dalam Kilogram: " << centigramToKilogram(weight) << endl;
	        cout << "Berat dalam Gram: " << kilogramToGram(centigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Pound: " << kilogramToPound(centigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Hektogram: " << kilogramToHectogram(centigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Dekagram: " << kilogramToDekagram(centigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Desigram: " << kilogramToDecigram(centigramToKilogram(weight)) << endl;
	        cout << "Berat dalam Miligram: " << kilogramToMilligram(centigramToKilogram(weight)) << endl;
	    } else if (conversionType == 8) {
	        cout << "Masukkan berat dalam Miligram: ";
	        cin >> weight;
	        cout << "Berat dalam Kilogram: " << milligramToKilogram(weight) << endl;
	        cout << "Berat dalam Gram: " << kilogramToGram(milligramToKilogram(weight)) << endl;
	        cout << "Berat dalam Pound: " << kilogramToPound(milligramToKilogram(weight)) << endl;
	        cout << "Berat dalam Hektogram: " << kilogramToHectogram(milligramToKilogram(weight)) << endl;
	        cout << "Berat dalam Dekagram: " << kilogramToDekagram(milligramToKilogram(weight)) << endl;
	        cout << "Berat dalam Desigram: " << kilogramToDecigram(milligramToKilogram(weight)) << endl;
	        cout << "Berat dalam Centigram: " << kilogramToCentigram(milligramToKilogram(weight)) << endl;
	    } else {
	        cout << "Pilihan tidak valid." << endl;
	    }
    
        do {
            cout << "Ingin konversi berat lagi? (y/t): ";
            cin >> choice;
            cin.ignore();

            if (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T') {
                cout << "Pilihan tidak valid." << endl;
            }
        } while (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T');
        
        if (choice == 't' || choice == 'T') {
            cout << "\nTerima kasih!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');
}

void konversiPanjang() {
    char choice;
    do {
        double length;
        int conversionType;

        cout << "========================" << endl;
        cout << "=== Konversi Panjang ===" << endl;
        cout << "========================" << endl;
        cout << "1. Kilometer (km)" << endl;
        cout << "2. Hektometer (hm)" << endl;
        cout << "3. Dekameter (dam)" << endl;
        cout << "4. Meter (m)" << endl;
        cout << "5. Desimeter (dm)" << endl;
        cout << "6. Sentimeter (cm)" << endl;
        cout << "7. Milimeter (mm)" << endl;
        cout << "Pilih jenis konversi: ";
        cin >> conversionType;

        if (conversionType == 1) {
            cout << "Masukkan panjang dalam Kilometer: ";
            cin >> length;
            cout << "Panjang dalam Hektometer: " << kilometerToHectometer(length) << endl;
            cout << "Panjang dalam Dekameter: " << kilometerToDekameter(length) << endl;
            cout << "Panjang dalam Meter: " << kilometerToMeter(length) << endl;
            cout << "Panjang dalam Desimeter: " << kilometerToMeter(length) * 10 << endl;
            cout << "Panjang dalam Sentimeter: " << kilometerToCentimeter(length) << endl;
            cout << "Panjang dalam Milimeter: " << kilometerToMillimeter(length) << endl;
        } else if (conversionType == 2) {
            cout << "Masukkan panjang dalam Hektometer: ";
            cin >> length;
            cout << "Panjang dalam Kilometer: " << hectometerToKilometer(length) << endl;
            cout << "Panjang dalam Dekameter: " << hectometerToDekameter(length) << endl;
            cout << "Panjang dalam Meter: " << hectometerToMeter(length) << endl;
            cout << "Panjang dalam Desimeter: " << hectometerToMeter(length) * 10 << endl;
            cout << "Panjang dalam Sentimeter: " << hectometerToCentimeter(length) << endl;
            cout << "Panjang dalam Milimeter: " << hectometerToMillimeter(length) << endl;
        } else if (conversionType == 3) {
            cout << "Masukkan panjang dalam Dekameter: ";
            cin >> length;
            cout << "Panjang dalam Kilometer: " << dekameterToKilometer(length) << endl;
            cout << "Panjang dalam Hektometer: " << dekameterToHectometer(length) << endl;
            cout << "Panjang dalam Meter: " << dekameterToMeter(length) << endl;
            cout << "Panjang dalam Desimeter: " << dekameterToMeter(length) * 10 << endl;
            cout << "Panjang dalam Sentimeter: " << dekameterToCentimeter(length) << endl;
            cout << "Panjang dalam Milimeter: " << dekameterToMillimeter(length) << endl;
        } else if (conversionType == 4) {
            cout << "Masukkan panjang dalam Meter: ";
            cin >> length;
            cout << "Panjang dalam Kilometer: " << meterToKilometer(length) << endl;
            cout << "Panjang dalam Hektometer: " << meterToHectometer(length) << endl;
            cout << "Panjang dalam Dekameter: " << meterToDekameter(length) << endl;
            cout << "Panjang dalam Desimeter: " << length * 10 << endl;
            cout << "Panjang dalam Sentimeter: " << meterToCentimeter(length) << endl;
            cout << "Panjang dalam Milimeter: " << meterToMillimeter(length) << endl;
        } else if (conversionType == 5) {
            cout << "Masukkan panjang dalam Desimeter: ";
            cin >> length;
            cout << "Panjang dalam Kilometer: " << meterToKilometer(length / 10) << endl;
            cout << "Panjang dalam Hektometer: " << meterToHectometer(length / 10) << endl;
            cout << "Panjang dalam Dekameter: " << meterToDekameter(length / 10) << endl;
            cout << "Panjang dalam Meter: " << length / 10 << endl;
            cout << "Panjang dalam Sentimeter: " << length << endl;
            cout << "Panjang dalam Milimeter: " << meterToMillimeter(length / 10) << endl;
        } else if (conversionType == 6) {
            cout << "Masukkan panjang dalam Sentimeter: ";
            cin >> length;
            cout << "Panjang dalam Kilometer: " << centimeterToKilometer(length) << endl;
            cout << "Panjang dalam Hektometer: " << centimeterToHectometer(length) << endl;
            cout << "Panjang dalam Dekameter: " << centimeterToDekameter(length) << endl;
            cout << "Panjang dalam Meter: " << centimeterToMeter(length) << endl;
            cout << "Panjang dalam Desimeter: " << centimeterToMeter(length) * 10 << endl;
            cout << "Panjang dalam Milimeter: " << centimeterToMillimeter(length) << endl;
        } else if (conversionType == 7) {
            cout << "Masukkan panjang dalam Milimeter: ";
            cin >> length;
            cout << "Panjang dalam Kilometer: " << millimeterToKilometer(length) << endl;
            cout << "Panjang dalam Hektometer: " << millimeterToHectometer(length) << endl;
            cout << "Panjang dalam Dekameter: " << millimeterToDekameter(length) << endl;
            cout << "Panjang dalam Meter: " << millimeterToMeter(length) << endl;
            cout << "Panjang dalam Desimeter: " << millimeterToMeter(length) * 10 << endl;
            cout << "Panjang dalam Sentimeter: " << millimeterToCentimeter(length) << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }

        do {
            cout << "Ingin konversi panjang lagi? (y/t): ";
            cin >> choice;
            cin.ignore();

            if (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T') {
                cout << "Pilihan tidak valid." << endl;
            }
        } while (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T');
        
        if (choice == 't' || choice == 'T') {
            cout << "\nTerima kasih!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');
}

void kalkulatorBMI() {
    char choice;
    do {
        double weight, height;
        int conversionType;

        cout << "======================" << endl;
        cout << "=== Kalkulator BMI ===" << endl;
        cout << "======================" << endl;
        cout << "Masukkan berat (kg): ";
        cin >> weight;
        cout << "Masukkan tinggi (m): ";
        cin >> height;

        double bmi = kalkulatorBMI(weight, height);
        cout << "BMI Anda: " << bmi << endl;
        
        if (bmi < 18.5) {
            cout << "Berat badan kurang" << endl;
        } else if (bmi < 25) {
            cout << "Berat badan normal" << endl;
        } else if (bmi < 30) {
            cout << "Berat badan berlebih" << endl;
        } else {
            cout << "Obesitas" << endl;
        }

        do {
            cout << "Ingin menghitung BMI lagi? (y/t): ";
            cin >> choice;
            cin.ignore();

            if (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T') {
                cout << "Pilihan tidak valid." << endl;
            }
        } while (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T');
            
        if (choice == 't' || choice == 'T') {
            cout << "\nTerima kasih!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');
}

int main() {
    char choice;

    do {
        int menuChoice;

        cout << "============================" << endl;
        cout << "=== Kalkulator V.Lengkap ===" << endl;
        cout << "============================" << endl;
        cout << "1. Operator Matematika" << endl;
        cout << "2. Konversi Suhu" << endl;
        cout << "3. Konversi Berat" << endl;
        cout << "4. Konversi Panjang" << endl;
        cout << "5. Body Mass Index" << endl;
        cout << "Pilih jenis Kalkulator: ";
        cin >> menuChoice;
        cin.ignore();

        switch (menuChoice) {
            case 1:
                operatorMatematika();
                break;
            case 2:
                konversiSuhu();
                break;
            case 3:
                konversiBerat();
                break;
            case 4:
                konversiPanjang();
                break;
            case 5:
                kalkulatorBMI();
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }

        do {
            cout << "Ingin menggunakan kalkulator lainnya? (y/t): ";
            cin >> choice;
            cin.ignore();

            if (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T') {
                cout << "Pilihan tidak valid." << endl;
            }
        } while (choice != 'y' && choice != 'Y' && choice != 't' && choice != 'T');
        
        if (choice == 't' || choice == 'T') {
            cout << "\nTerima kasih!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}