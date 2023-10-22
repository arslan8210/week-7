#include <iostream>
using namespace std;

main()
{
    int count, c1, c2, c3, c4;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;
    double costPerTon = 0.0, tonOfminiBus = 0.0, tonOfTrain = 0.0, tonOftruck = 0.0, totalCost = 0.0;
    double totalOfCargo = 0.0;
    for (int c = 1; c <= count; c++)
    {
        cout << "Enter the tonnage of cargo " << count << " : ";
        cin >> c1;
        totalOfCargo = totalOfCargo + c1;
        if (c1 <= 3)
        {
            tonOfminiBus += c1;
        }
        else if (c1 > 3 && c1 <= 11)
        {
            tonOftruck += c1;
        }
        else
        {
            tonOfTrain += c1;
        }
    }
    float priceOfminibus = 200*tonOfminiBus;
    float priceOfTruck = 175*tonOftruck;
    float priceOfTrain = 120*tonOfTrain;
    cout << fixed;
    cout << setprecision(2);
    double average = (priceOfminibus + priceOfTruck + priceOfTrain) / totalOfCargo;
    double miniBuspercent = (tonOfminiBus / totalOfCargo) * 100;
    double truckpercent = (tonOftruck / totalOfCargo) * 100;
    double trainpercent = (tonOfTrain / totalOfCargo) * 100;

    cout << average << endl;
    cout << miniBuspercent << "%" << endl;
    cout << truckpercent << "%" << endl;
    cout << trainpercent << "%" << endl;
}