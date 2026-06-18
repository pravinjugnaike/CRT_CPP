
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

static int p = 0;

class BusReservation
{
    char busnumber[10], driver[20], arrival[10], depart[10];
    char from[20], to[20];
    int fare;
    char seat[8][4][20];

public:
    void install();
    void seatAllotment();
    void cancelReservation();
    void empty();
    void show();
    void busAvail();
    void position(int i);
};

BusReservation bus[10];

void vline(char ch)
{
    for(int i = 80; i > 0; i--)
        cout << ch;
}

void BusReservation::install()
{
    if(p >= 10)
    {
        cout << "\nBus limit reached!\n";
        return;
    }

    cout << "\nEnter Bus No: ";
    cin >> bus[p].busnumber;

    for(int i=0;i<p;i++)
    {
        if(strcmp(bus[i].busnumber,bus[p].busnumber)==0)
        {
            cout<<"\nBus Number Already Exists!\n";
            return;
        }
    }

    cout << "Enter Driver's Name: ";
    cin >> bus[p].driver;

    cout << "Arrival Time: ";
    cin >> bus[p].arrival;

    cout << "Departure Time: ";
    cin >> bus[p].depart;

    cout << "From: ";
    cin >> bus[p].from;

    cout << "To: ";
    cin >> bus[p].to;

    cout << "Fare: ";
    cin >> bus[p].fare;

    bus[p].empty();
    p++;

    cout << "\nBus Installed Successfully!\n";
}

void BusReservation::empty()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            strcpy(seat[i][j], "Empty");
        }
    }
}

void BusReservation::seatAllotment()
{
    int seatNo;
    char number[10];

top:
    cout << "\nEnter Bus No: ";
    cin >> number;

    int n;

    for(n = 0; n < p; n++)
    {
        if(strcmp(bus[n].busnumber, number) == 0)
            break;
    }

    if(n >= p)
    {
        cout << "\nInvalid Bus Number!\n";
        goto top;
    }

    while(true)
    {
        cout << "\nEnter Seat Number (1-32): ";
        cin >> seatNo;

        if(seatNo < 1 || seatNo > 32)
        {
            cout << "\nOnly 32 seats available!\n";
            continue;
        }

        int row = (seatNo - 1) / 4;
        int col = (seatNo - 1) % 4;

        if(strcmp(bus[n].seat[row][col], "Empty") == 0)
        {
            cout << "Enter Passenger Name: ";
            cin >> bus[n].seat[row][col];

            cout << "\nSeat Reserved Successfully!\n";

            cout << "\n";
            vline('*');
            cout << "\n\t\tBUS TICKET\n";
            cout << "\nPassenger : " << bus[n].seat[row][col];
            cout << "\nBus No    : " << bus[n].busnumber;
            cout << "\nRoute     : " << bus[n].from << " -> " << bus[n].to;
            cout << "\nSeat No   : " << seatNo;
            cout << "\nFare      : Rs." << bus[n].fare;
            cout << "\n";
            vline('*');
            cout << "\n";

            break;
        }
        else
        {
            cout << "\nSeat Already Reserved By "
                 << bus[n].seat[row][col] << endl;
        }
    }
}

void BusReservation::cancelReservation()
{
    char number[10];
    int seatNo;

    cout << "\nEnter Bus No: ";
    cin >> number;

    int n;

    for(n = 0; n < p; n++)
    {
        if(strcmp(bus[n].busnumber, number) == 0)
            break;
    }

    if(n >= p)
    {
        cout << "\nInvalid Bus Number!\n";
        return;
    }

    cout << "Enter Seat Number: ";
    cin >> seatNo;

    if(seatNo < 1 || seatNo > 32)
    {
        cout << "\nInvalid Seat Number!\n";
        return;
    }

    int row = (seatNo - 1) / 4;
    int col = (seatNo - 1) % 4;

    if(strcmp(bus[n].seat[row][col], "Empty") == 0)
    {
        cout << "\nSeat Already Empty!\n";
    }
    else
    {
        strcpy(bus[n].seat[row][col], "Empty");
        cout << "\nReservation Cancelled Successfully!\n";
    }
}

void BusReservation::position(int l)
{
    int s = 0;
    int emptySeats = 0;

    cout << "\n\nSeat Arrangement\n";

    for(int i = 0; i < 8; i++)
    {
        cout << "\n";

        for(int j = 0; j < 4; j++)
        {
            s++;

            cout.width(5);
            cout << s << ".";

            cout.width(15);
            cout << bus[l].seat[i][j];

            if(strcmp(bus[l].seat[i][j], "Empty") == 0)
                emptySeats++;
        }
    }

    cout << "\n\nTotal Empty Seats: " << emptySeats << endl;
}

void BusReservation::show()
{
    char number[10];
    int n;

    cout << "\nEnter Bus No: ";
    cin >> number;

    for(n = 0; n < p; n++)
    {
        if(strcmp(bus[n].busnumber, number) == 0)
            break;
    }

    if(n >= p)
    {
        cout << "\nInvalid Bus Number!\n";
        return;
    }

    vline('*');

    cout << "\nBus No      : " << bus[n].busnumber
         << "\nDriver      : " << bus[n].driver
         << "\nArrival     : " << bus[n].arrival
         << "\nDeparture   : " << bus[n].depart
         << "\nFrom        : " << bus[n].from
         << "\nTo          : " << bus[n].to
         << "\nFare        : Rs." << bus[n].fare
         << endl;

    vline('*');

    bus[n].position(n);

    int a = 1;

    cout << "\n\nReserved Seats:\n";

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(strcmp(bus[n].seat[i][j], "Empty") != 0)
            {
                cout << "\nSeat No " << a
                     << " Reserved For "
                     << bus[n].seat[i][j];
            }
            a++;
        }
    }

    cout << endl;
}

void BusReservation::busAvail()
{
    if(p == 0)
    {
        cout << "\nNo Buses Installed Yet!\n";
        return;
    }

    for(int n = 0; n < p; n++)
    {
        vline('-');

        cout << "\nBus No      : " << bus[n].busnumber
             << "\nDriver      : " << bus[n].driver
             << "\nArrival     : " << bus[n].arrival
             << "\nDeparture   : " << bus[n].depart
             << "\nFrom        : " << bus[n].from
             << "\nTo          : " << bus[n].to
             << "\nFare        : Rs." << bus[n].fare
             << "\n";

        vline('-');
        cout << "\n";
    }
}

int main()
{
    int ch;

    while(true)
    {
        cout << "\n===== BUS RESERVATION SYSTEM =====\n";
        cout << "\n1. Install Bus";
        cout << "\n2. Reservation";
        cout << "\n3. Show Bus Details";
        cout << "\n4. Available Buses";
        cout << "\n5. Cancel Reservation";
        cout << "\n6. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                bus[p].install();
                break;

            case 2:
                bus[0].seatAllotment();
                break;

            case 3:
                bus[0].show();
                break;

            case 4:
                bus[0].busAvail();
                break;

            case 5:
                bus[0].cancelReservation();
                break;

            case 6:
                cout << "\nThank You!\n";
                exit(0);

            default:
                cout << "\nInvalid Choice!";
        }
    }

    return 0;
}
