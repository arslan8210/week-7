#include <iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 0;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> n1;
    int doc = 7, treatedpatients = 0, untreatedpatients = 0;
    for (int day = 1; day <= n1; day++)
    {
        cout << "Number of patients who visited hospital on Day "<<day <<" : ";
        cin >> n2;
        if (day % 3 == 0)
        {
            if (untreatedpatients > treatedpatients)
            {
                doc = doc + 1;
            }
        }
        if (n2 <= doc)
        {
            treatedpatients = treatedpatients + n2;
        }
        else
        {
            treatedpatients = treatedpatients + doc;
            untreatedpatients = untreatedpatients+(n2 - doc) ;
        }
    }
    cout << "Treated Patients: \n" << treatedpatients; 
    cout << "Untreated Patients: \n" << untreatedpatients;
    
}