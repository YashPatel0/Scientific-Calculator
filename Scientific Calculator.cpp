#include<iostream>
#include<math.h>
using namespace std;

class Linear
{
    private:
        int A[2][2];
        int B[2][2];
        int C[2][2];
        int P[3][3];
        int Q[3][3];
        int X[3][3];
        float de=0;
        int i;
        int j;
        int k;
        int D;
        int De;
        int T;
    public:
        void Mul();
        void Det();
        void Tran();
        void Tr();
        void Add();
        void Sub();
        void In();
        void Mat2();
        void Mat3();
        void Mat1();
        void Mat4();
};
class physics
{
    private:
        float a;
        float b;
        float c;
        float r;
    public:
        void deltatostar();
        void startodelta();
        void parallelresistor();
        void seriesresistor();
        void impedence();
        void magneticforce();
        void electricforce();
        void circuitchanger();
};
class length
{
    private:
        float cm;
        float dm;
        float mm;
        float km;
        float m;
        float um;
        float pm;
        float nm;
        float yd;
        float nmi;
        float ft;
        float mi;
        float in;
    public:
        void basedecimeter();
        void basemillimeter();
        void basekilometer();
        void basecentimeter();
        void basemeter();
        void basemicrometer();
        void baseyard();
        void basenauticalmile();
        void basepicometer();
        void basenanometer();
        void basefoot();
        void basemile();
        void baseinch();
};
class algebra
{
    public:
        void ITF();
        void TF();
        void Log();
        void Factorial();
        void CubeRoot();
        void AOT();
};
class arithmetic
{
    private:
        double a[1000];
    public:
        void add();
        void sub();
        void mul();
        void div();
};
void Linear::Mul()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat2();
            cout<<"Multiplication Of Matrix [AxB]: "<<endl;
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    C[i][j] = 0;
                    for(k = 0; k < 2; k++){
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<"  "<<C[i][j];
                }
                cout<<"  "<<endl;
            }
            break;
        case 2:
            Mat3();
            cout<<"Multiplication Of Matrix [P x Q]: "<<endl;
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    C[i][j] = 0;
                    for(k = 0; k < 3; k++){
                        X[i][j] += P[i][k] * Q[k][j];
                    }
                }
            }

            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cout<<"  "<<X[i][j];
                }
                cout<<"  "<<endl;
            }
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::Det()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat1();
            D = A[0][0]*A[1][1] - A[0][1]*A[1][0];
            cout<<"Determinant Of Matrix A is: "<<D<<endl;
            break;
        case 2:
            Mat4();
            De=(P[0][0]*(P[1][1]*P[2][2] - P[1][2]*P[2][1]))- (P[0][1]*(P[1][0]*P[2][2] - P[1][2]*P[2][0])) + (P[0][2]*(P[1][0]*P[2][1] - P[1][1]*P[2][0]));
            cout<<"Determinant Of Matrix P is: "<<De<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::Tran()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat1();
            cout<<"# Transpose Of Matrix A"<<endl;
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<"  "<<A[j][i];
                }
                cout<<"  "<<endl;
            }
            break;
        case 2:
            Mat4();
            cout<<"# Transpose Of Matrix P"<<endl;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cout<<"  "<<P[j][i];
                }
                cout<<"  "<<endl;
            }
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::Tr()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat1();
            T=A[0][0] + A[1][1];
            cout<<"Trace of Matrix A: "<<T<<endl;
            break;
        case 2:
            Mat4();
            T=P[0][0] + P[1][1] + P[2][2];
            cout<<"Trace of Matrix P: "<<T<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::Add()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat2();
            cout<<"Addition Of Matrix: "<<endl;
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                        C[i][j] = A[i][j] + B[i][j];
                    }
                }
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<"  "<<C[i][j];
                }
                cout<<"  "<<endl;
            }
            break;
        case 2:
            Mat3();
            cout<<"Addition Of Matrix: "<<endl;
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                        X[i][j] = P[i][j] + Q[i][j];
                    }
                }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cout<<"  "<<X[i][j];
                }
                cout<<"  "<<endl;
            }
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::Sub()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat2();
            cout<<"Subtraction Of Matrix: "<<endl;
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                        C[i][j] = A[i][j] - B[i][j];
                    }
                }
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<"  "<<C[i][j];
                }
                cout<<"  "<<endl;
            }
            break;
        case 2:
            Mat3();
            cout<<"Subtraction Of Matrix: "<<endl;
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                        C[i][j] = A[i][j] - B[i][j];
                    }
                }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cout<<"  "<<C[i][j];
                }
                cout<<"  "<<endl;
            }
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::In()
{
    int c;
    cout<<endl<<"(1) 2 x 2 "<<endl;
    cout<<"(2) 3 x 3 "<<endl;
    cout<<"Enter Your Matrix Order: ";
    cin>>c;
    switch(c)
        {
        case 1:
            Mat1();
            de = A[0][0]*A[1][1] - A[0][1]*A[1][0];
            cout<<"Inverse Of Matrix A is: "<<endl;
            int t;
            t=A[0][0];
            A[0][0]=A[1][1];
            A[1][1]=t;
            A[0][1]= -A[0][1];
            A[1][0]= -A[1][0];
            if(de==0)
                cout<<"Inverse In Not Exist,Because Determinant is zero"<<endl;
            else
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        cout<<A[i][j]/de<<"  ";
                }
                cout<<"  "<<endl;
            }
            break;
        case 2:
            Mat4();
            de=(P[0][0]*(P[1][1]*P[2][2] - P[1][2]*P[2][1]))- (P[0][1]*(P[1][0]*P[2][2] - P[1][2]*P[2][0])) + (P[0][2]*(P[1][0]*P[2][1] - P[1][1]*P[2][0]));
            cout<<"Inverse Of Matrix P is: "<<endl;
            if(de==0){
                cout<<"Inverse Not Exist"<<endl;
            }
            else{
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++)
                    cout<<((P[(j+1)%3][(i+1)%3] * P[(j+2)%3][(i+2)%3]) - (P[(j+1)%3][(i+2)%3] * P[(j+2)%3][(i+1)%3]))/ de<<"\t";
                    cout<<"\n";
                }
            }
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void Linear::Mat2()
{
    cout<<"Order of Matrix is 2x2"<<endl;
    cout<<"Enter value of matrix A: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"Enter A["<<i+1<<"]["<<j+1<<"]:"  ;
            cin>>A[i][j];
        }
    }
    cout<<"# Matrix A"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"  "<<A[i][j];
        }
        cout<<"  "<<endl;
    }
    cout<<"Enter value of matrix B: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"Enter B["<<i+1<<"]["<<j+1<<"]:"  ;
            cin>>B[i][j];
        }
    }
    cout<<"# Matrix B"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"  "<<B[i][j];
            }
        cout<<"  "<<endl;
    }
}
void Linear::Mat3()
{
    cout<<"Order of Matrix is 3x3"<<endl;
    cout<<"Enter value of matrix P: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter P["<<i+1<<"]["<<j+1<<"]:"  ;
            cin>>P[i][j];
        }
    }
    cout<<"# Matrix P"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"  "<<P[i][j];
        }
        cout<<"  "<<endl;
    }
    cout<<"Enter value of matrix Q: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter Q["<<i+1<<"]["<<j+1<<"]:"  ;
            cin>>B[i][j];
        }
    }
    cout<<"# Matrix Q"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"  "<<Q[i][j];
        }
        cout<<"  "<<endl;
    }
}
void Linear::Mat1()
{
    cout<<"Enter value of matrix A[2 x 2]: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"Enter A["<<i+1<<"]["<<j+1<<"]:"  ;
            cin>>A[i][j];
        }
    }
    cout<<"# Matrix A"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"  "<<A[i][j];
        }
        cout<<"  "<<endl;
    }
}
void Linear::Mat4()
{
    cout<<"Enter value of matrix P[3 x 3]: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter P["<<i+1<<"]["<<j+1<<"]:"  ;
            cin>>P[i][j];
        }
    }
    cout<<"# Matrix P"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"  "<<P[i][j];
        }
        cout<<"  "<<endl;
    }
}
/*-----------------------------------------------*/
void physics::deltatostar()
{
    cout<<"You have chosen Delta to Star circuit conversion\n";
    cout<<"\n";
    cout<<"Your answer would be according to 1st and 2nd resistance\n";
    cout<<"\n";
    cout<<"Enter the value of 1st resistance: ";
    cin>> a;
    cout<<"Enter the value of 2nd resistance: ";
    cin>> b;
    cout<<"Enter the value of 3rd resistance: ";
    cin>>c;
    cout<<"\n";
    r = (a*b)/(a+b+c);
    cout<<"Your converted resistance = "<<r;
    cout<<"\n";
    cout<<"\n";
}
void physics::startodelta()
{
    float a,b,c,r;
    cout<<"You have chosen Star to Delta circuit conversion\n";
    cout<<"\n";
    cout<<"Your answer would be according to 1st and 2nd resistance\n";
    cout<<"\n";
    cout<<"Enter the value of 1st resistance: ";
    cin>>a;
    cout<<"Enter the value of 2nd resistance: ";
    cin>>b;
    cout<<"Enter the value of 3rd resistance: ";
    cin>>c;
    cout<<"\n";
    r = a + b + (a*b)/c;
    cout<<"Your converted resistance = "<<r;
    cout<<"\n";
    cout<<"\n";
}
void physics::parallelresistor()
{
    int n;
    float sum,r;
    sum = 0;
    cout<<"You have chosen Net resistance in Parallel circuit\n";
    cout<<"\n";
    cout<<"Enter total number of resistors:";
    cin>>n;
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        float x,y;
        cout<<"Enter the value of resistor no. "<< i+1<<"=";
        cin>>x;
        y = 1/x;
        sum = sum + y;
    }
    r = 1/sum;
    cout<<"Your net resistance is = "<< r;
    cout<<"\n";
    cout<<"\n";
}
void physics::seriesresistor()
{
    int n;
    float sum,r;
    sum = 0;
    cout<<"You have chosen Net resistance in series circuit\n";
    cout<<"\n";
    cout<<"Enter total number of resistors:";
    cin>>n;
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        float x,y;
        cout<<"Enter the value of resistor no. "<< i+1<<"=";
        cin>>x;
        sum = sum + x;
    }
    cout<<"Your net resistance is = "<< sum;
    cout<<"\n";
    cout<<"\n";
}
void physics::impedence()
{
    float f,r,c,l;
    float pi;
    pi = 3.14;
    cout<<"You have chosen Impedance calculator";
    cout<<"\n";
    cout<<"Enter the value of frequency: ";
    cin>>f;
    cout<<"Enter the value of Resistance:";
    cin>>r;
    cout<<"Enter the value of Capacitance in microfarads:";
    cin>>c;
    cout<<"Enter the value of Inductance in milliHenry: ";
    cin>>l;
    cout<<"\n";
    float x,imp;
    x = ((f * 2.00 * pi) * l)/1000.00 -  (1000000.00/(2.00*pi*c*f));
    imp = sqrt(r*r + x*x);
    cout<<"Your Impedance is ="<<imp;
    cout<<"\n";
}
void physics::magneticforce()
{
    float u0, i1, i2, l, d, pi, f;
    cout<<"You have chosen Magnetic Force Calculator\n";
    cout<<"\n";
    cout<<"Enter the value of current in 1st wire: ";
    cin>>i1;
    cout<<"Enter the value of current in 2nd wire: ";
    cin>>i2;
    cout<<"Enter the value of length of wire: ";
    cin>>l;
    cout<<"Enter the value of distance between wires: ";
    cin>>d;
    cout<<"\n";
    pi = 3.14;
    u0 = (4*pi)/(10000000);
    f = (u0*i1*i2)/(2*pi*d);
    cout<<"Your Magnetic force is = "<<f;
    cout<<"\n";
    cout<<"\n";
}
void physics::electricforce()
{
    float k, q1, q2, d, f;
    cout<<"You have chosen Electric Force Calculator\n";
    cout<<"\n";
    cout<<"Enter the value of 1st charge: ";
    cin>>q1;
    cout<<"Enter the value of 2nd charge: ";
    cin>>q2;
    cout<<"Enter the value of distance between charges: ";
    cin>>d;
    cout<<"\n";
    k = 9000000000;
    f = (k*q1*q2)/(d*d);
    cout<<"Your electric force is = "<<f;
    cout<<"\n";
}
void physics::circuitchanger()
{
    cout<<"You have chosen Circuit charging solver\n";
    cout<<"\n";
    cout<<"To find final charge in RC circuit press:1\n";
    cout<<"To find final charge in RL circuit press:2\n";
    cout<<"\n";
    int n;
    cout<<"Enter your digit:";
    cin>>n;
    cout<<"\n";
    if (n==1)
    {
        float r,c,t,q0;
        cout<<"Enter the value of initial charge: ";
        cin>>q0;
        cout<<"Enter the value of Resistance:";
        cin>>r;
        cout<<"Enter the value of Capacitance: ";
        cin>>c;
        cout<<"Enter the value of time after you wanted charge: ";
        cin>>t;
        cout<<"\n";
        float q;
        q = q0*(1-exp((-t)/(r*c)));
        cout<<"Your final charge = "<<q;
        cout<<"\n";
    }
    else if (n==2)
    {
        float r,l,t,i0;
        cout<<"Enter the value of initial current:";
        cin>>i0;
        cout<<"Enter the value of Resistance:" ;
        cin>>r;
        cout<<"Enter the value of Inductance:" ;
        cin>>l;
        cout<<"Enter the value of time after you wanted charge:";
        cin>>t;
        cout<<"\n";
        float i;
        i = i0*(1-exp((-t*r)/l));
        cout<<"Your final current = "<<i;
        cout<<"\n";
    }
    else
        cout<<"invalid choice";
}
void length::basedecimeter()
{
    cout<<"enter value in decimeter-";
    cin>>dm;
    cm=10*dm;
    mm=100*dm;
    km=0.0001*dm;
    m=0.1*dm;
    um=10000*dm;
    pm=100000000000*dm;
    nm=100000000*dm;
    yd=0.10936133*dm;
    nmi=0.000054*dm;
    ft=0.32808399*dm;
    mi=0.0000614*dm;
    in=3.93700787*dm;
    cout<<"Here you have been displayed all the units being converted from decimeter-"<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in kilometer="<<km<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in yard="<<yd<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basemillimeter()
{
    cout<<"enter value in millimeter-";
    cin>>mm;
    cm=0.1*mm;
    dm=0.01*mm;
    km=0.000001*mm;
    m=0.001*mm;
    um=1000*mm;
    pm=1000000000*mm;
    nm=1000000*mm;
    yd=0.0010936133*mm;
    nmi=0.00000054*mm;
    ft=0.0032808399*mm;
    mi=0.000000621*mm;
    in=0.0393700787*mm;
    cout<<"here you have been displayed all the units being converted from millimeter"<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in kilometer="<<km<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in yard="<<yd<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basekilometer()
{
    cout<<"enter value in kilometer-";
    cin>>km;
    cm=100000*km;
    dm=10000*km;
    mm=1000000*km;
    m=1000*km;
    um=1000000000*km;
    pm=1000000000000000*km;
    nm=1000000000000*km;
    yd=1093.6133*km;
    nmi=0.54*km;
    ft=3280.8399*km;
    mi=0.6214*km;
    in=39370.0787*km;
    cout<<"here you have been displayed all the units being converted from kilometer"<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in milimeter="<<mm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in yard="<<yd<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basecentimeter()
{
    cout<<"enter value in centimeter-";
    cin>>cm;
    km=0.00001*cm;
    dm=0.1*cm;
    mm=10*cm;
    m=0.01*cm;
    um=10000*cm;
    pm=10000000000*cm;
    nm=10000000*cm;
    yd=0.010936133*cm;
    nmi=0.0000054*cm;
    ft=0.032808399*cm;
    mi=0.000006214*cm;
    in=0.393700787*cm;
    cout<<"here you have been displayed all the units being converted from centimeter"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in yard="<<yd<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basemeter()
{
    cout<<"enter value in meter-";
    cin>>m;
    km=0.001*m;
    dm=10*m;
    mm=1000*m;
    cm=100*m;
    um=100000*m;
    pm=1000000000000*m;
    nm=1000000000*m;
    yd=1.0936133*m;
    nmi=0.00054*m;
    ft=3.2808399*m;
    mi=0.0006214*m;
    in=39.3700787*m;
    cout<<"here you have been displayed all the units being converted from meter"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in yard="<<yd<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basemicrometer()
{
    cout<<"enter value in micrometer-";
    cin>>um;
    km=0.000000001*um;
    dm=0.00001*um;
    mm=0.001*um;
    cm=0.0001*um;
    m=0.000001*um;
    pm=1000000*um;
    nm=1000*um;
    yd=0.0000010936133*um;
    nmi=0.00000000054*um;
    ft=0.0000032808399*um;
    mi=0.0000000006214*um;
    in=0.0000393700787*um;
    cout<<"here you have been displayed all the units being converted from micrometer"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in yard="<<yd<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::baseyard()
{
    cout<<"enter value in yards-";
    cin>>yd;
    km=0.000914399999861*yd;
    dm=9.14399998610112*yd;
    mm=914.399998610112*yd;
    cm=91.4399998610112*yd;
    m=0.914399998610112*yd;
    pm=914399998610.112*yd;
    nm=914399998.610112*yd;
    um=914399.998610112*yd;
    nmi=0.00049377599924946048*yd;
    ft=2.9999999999999999930688*yd;
    mi=0.0005682081591363235968*yd;
    in=35.9999999085600000558144*yd;
    cout<<"here you have been displayed all the units being converted from yards"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basenauticalmile()
{
    cout<<"enter value in nautical miles-";
    cin>>nmi;
    km=1.85185851851851851852*nmi;
    dm=18518.51851851851852*nmi;
    mm=1851851.851851851852*nmi;
    cm=185185.1851851851852*nmi;
    m=1851.851851851851852*nmi;
    pm=1851851851851851.852*nmi;
    nm=1851851851851.851852*nmi;
    um=1851851851.851851852*nmi;
    yd=2025.209814814814814*nmi;
    ft=6075.6294444444444493*nmi;
    mi=1.1507407407407408328*nmi;
    in=72907.55314824814815398*nmi;
    cout<<"here you have been displayed all the units being converted from nautical mile"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in yards="<<yd<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basepicometer()
{
    cout<<"enter value in picometer-";
    cin>>pm;
    km=0.000000000000001*pm;
    dm=0.00000000001*pm;
    mm=0.000000001*pm;
    cm=0.0000000001*pm;
    m=0.000000000001*pm;
    nmi=0.00000000000000054*pm;
    nm=0.001*pm;
    um=0.000001*pm;
    yd=0.0000000000010936*pm;
    ft=0.0000000000032808399*pm;
    mi=0.0000000000000006214*pm;
    in=0.000000000039370078*pm;
    cout<<"here you have been displayed all the units being converted from picometer"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in yards="<<yd<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basenanometer()
{
    cout<<"enter value in nanometer-";
    cin>>nm;
    km=0.000000000001*nm;
    dm=0.00000001*nm;
    mm=0.000001*nm;
    cm=0.0000001*nm;
    m=0.000000001*nm;
    nmi=0.00000000000054*nm;
    pm=1000*nm;
    um=0.0001*nm;
    yd=0.0000000010936133*nm;
    ft=0.0000000032808399*nm;
    mi=0.0000000000006214*nm;
    in=0.0000000393700787*nm;
    cout<<"here you have been displayed all the units being converted from nanometer"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in yards="<<yd<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basefoot()
{
    cout<<"enter value in foot-";
    cin>>ft;
    km=0.000304799999536704*ft;
    dm=3.04799999536704*ft;
    mm=304.799999536704*ft;
    cm=30.4799999536704*ft;
    m=0.304799999536704*ft;
    nmi=0.00016459199974982016*ft;
    pm=304799999536.704*ft;
    um=304799.999536704*ft;
    yd=0.3333333333333333325632*ft;
    nm=304799999.536704*ft;
    mi=0.0001894027197121078656*ft;
    in=11.9999999695200000186048*ft;
    cout<<"here you have been displayed all the units being converted from foot"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in yards="<<yd<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in mile="<<mi<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::basemile()
{
    cout<<"enter value in miles-";
    cin>>mi;
    km=1.609269391696169939*mi;
    dm=16092.69391696169939*mi;
    mm=1609269.391696169939*mi;
    cm=160926.9391696169939*mi;
    m=1609.269391696169939*mi;
    nmi=0.86900547151593176706*mi;
    pm=1609269391696169.939*mi;
    um=1609269391.696169939*mi;
    yd=1759.9184100418410043505887*mi;
    nm=1609269391696.169939*mi;
    ft=5279.7552301255230130517661*mi;
    in=63357.0626005793369870011993*mi;
    cout<<"here you have been displayed all the units being converted from miles"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in yards="<<yd<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in inch="<<in<<endl;
}
void length::baseinch()
{
    cout<<"enter value in inch-";
    cin>>in;
    km=0.000025400000025908*in;
    dm=0.25400000025908*in;
    mm=25.400000025908*in;
    cm=2.5400000025908*in;
    m=0.025400000025908*in;
    nmi=0.00001371600001399032*in;
    pm=25400000025.908*in;
    um=25400.000025908*in;
    yd=0.0277777778483333333764*in;
    nm=025400000.025908*in;
    ft=0.0833333335450000001292*in;
    mi=0.0000157835600160992312*in;
    cout<<"here you have been displayed all the units being converted from inch"<<endl;
    cout<<" ---> value in kilometers="<<km<<endl;
    cout<<" ---> value in decimeter="<<dm<<endl;
    cout<<" ---> value in millimeter="<<mm<<endl;
    cout<<" ---> value in centimeter="<<cm<<endl;
    cout<<" ---> value in meter="<<m<<endl;
    cout<<" ---> value in nautical miles="<<nmi<<endl;
    cout<<" ---> value in picometer="<<pm<<endl;
    cout<<" ---> value in micrometer="<<um<<endl;
    cout<<" ---> value in yards="<<yd<<endl;
    cout<<" ---> value in nanometer="<<nm<<endl;
    cout<<" ---> value in foot="<<ft<<endl;
    cout<<" ---> value in miles="<<mi<<endl;
}
void algebra::ITF()
{
    int n;
    float x,b;
    cout<<"\nYou choose Inverse Trigonometry calculator\n";
    cout<<"\n[1]For sin inverse press\n";
    cout<<"[2]For cos inverse press\n";
    cout<<"[3]For tan inverse press\n";
    cout<<"\nEnter your choice : ";
    cin>>n;
    if(n == 1){
        cout<<"\nYou choose sin inverse operation\n\n";
        cout<<"Enter value to find Angle : ";
        cin>>x;

        b = asin(x);

        cout<<"\nAngle in Radians = "<<b<<" radians"<<endl;
        cout<<"Angle in Degrees = "<<(b*180)/3.1415<<" degrees"<<endl;
    }
    if(n == 2){
        cout<<"\nYou choose cos inverse operation\n\n";
        cout<<"Enter value to find Angle : ";
        cin>>x;

        b = acos(x);

        cout<<"\nAngle in Radians = "<<b<<" radians"<<endl;
        cout<<"Angle in Degrees = "<<(b*180)/3.1415<<" degrees"<<endl;
    }
    if(n == 3){
        cout<<"\nYou choose tan inverse operation\n\n";
        cout<<"\nEnter value to find Angle : ";
        cin>>x;

        b = atan(x);

        cout<<"\nAngle in Radians = "<<b<<" radians"<<endl;
        cout<<"Angle in Degrees = "<<(b*180)/3.1415<<" degrees"<<endl;
    }
    if(n == 4){
            cout<<"\nInvalid choice for operation!!!\n";
    }
}
void algebra::TF()
{
    int n;
    float x,b;
    cout<<"\nYou choose Trigonometry calculator\n";
    cout<<"\n[1]For sin press\n";
    cout<<"[2]For cos press\n";
    cout<<"[3]For tan press\n";
    cout<<"enter your choice : ";
    cin>>n;
    if(n == 1){
        cout<<"\nYou choose sin operation\n\n";
        cout<<"Enter value to find Angle : ";
        cin>>x;

        b = sin(x);

        cout<<"\nAngle in Radians = "<<b<<" radian"<<endl;
       // cout<<"Angle in Degrees = "<<(b*3.1415)/180<<" degree"<<endl;
    }
    if(n == 2){
        cout<<"\nYou choose cos operation\n\n";
        cout<<"Enter value to find Angle : ";
        cin>>x;

        b = cos(x);

        cout<<"\nAngle in Radians = "<<b<<" radian"<<endl;
       // cout<<"Angle in Degrees = "<<(b*3.1415)/180<<" degree"<<endl;
    }
    if(n == 3){
        cout<<"\nYou choose tan operation\n\n";
        cout<<"Enter value to find Angle : ";
        cin>>x;

        b = tan(x);

        cout<<"\nAngle in Radians = "<<b<<" radian"<<endl;
       // cout<<"Angle in Degrees = "<<(b*3.1415)/180<<" degree"<<endl;
    }
    if(n == 4){
        cout<<"\nInvalid choice for operation!!!\n";
    }
}
void algebra::Log()
{
    float b,v,a;
    cout<<"\nYou choose the logarithm calculator\n\n";
    cout<<"Enter the value : ";
    cin>>v;
    cout<<"Enter the Base value of Log : ";
    cin>>b;

    a = log(v)/log(b);

    cout<<"\nYour answer is = "<<a<<endl;
}
void algebra::Factorial()
{
    int a,x=1;
    cout<<"\nYou choose Factorial calculator\n\n";
    cout<<"Enter your number for which you want to find factorial : ";
    cin>>a;
    for(int i = 1 ; i <= a ; i++)
    {
       x = x*i;
    }
    cout<<"\n"<<a<<"! is = "<<x<<endl;
}
void algebra::CubeRoot()
{
    float a,b;
    cout<<"\nYou choose CubeRoot calculator\n\n";
    cout<<"Enter the for which you want to find Cube Root : ";
    cin>>a;
    b = pow(a, 1.0/3.0);
    cout<<"\nCubeRoot of "<<a<<" is = "<<b<<endl;
}
void algebra::AOT()
{
    float h,b,area;
    cout<<"\nYou choose Area Of Triangle calculator\n\n";
    cout<<"Enter length of Height of triangle : ";
    cin>>h;
    cout<<"Enter length of Base of triangle : ";
    cin>>b;
    area = 0.5*b*h;
    cout<<"\nArea of Triangle is = "<<area<<endl;
}
void arithmetic::add()
{
    int x,i;
    double S=0;
    cout<<"Enter How many number you want to Add: ";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<"Enter Number"<<i+1<<":";
        cin>>a[i];
        S+=a[i];
    }
    cout<<"Addition= "<<S<<endl;
}
void arithmetic::sub()
{
    int x,i;
    double S=0;
    cout<<"Enter How many number you want to Subtract: ";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<"Enter Number"<<i+1<<":";
        cin>>a[i];
        S-=a[i];
    }
    cout<<"Subtraction= "<<S<<endl;
}
void arithmetic::mul()
{
    int x,i;
    double S=1;
    cout<<"Enter How many number you want to Multiply: ";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<"Enter Number"<<i+1<<":";
        cin>>a[i];
        S*=a[i];
    }
    cout<<"Multiplication= "<<S<<endl;
}
void arithmetic::div()
{
    double a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Division: "<<a/b<<endl;
}
int main()
{
    Linear L;
    physics p1;
    length l1;
    algebra a1;
    arithmetic A1;
    cout<<"*******************************"<<endl;
    cout<<"*    [1] LA Toolkit           *"<<endl;
    cout<<"*    [2] PHYSICS Toolkit      *"<<endl;
    cout<<"*    [3] MEASUREMENT Toolkit  *"<<endl;
    cout<<"*    [4] ALGEBRAIC Toolkit    *"<<endl;
    cout<<"*    [5] ARITHMETIC Toolkit   *"<<endl;
    cout<<"*******************************"<<endl;
    int a;
    cout<<"Enter Your Choice Of Operation: ";
    cin>>a;
    if(a==1)
    {
        cout<<endl<<"********************************"<<endl;
        cout<<"*  [1]Matrix Multiplication    *"<<endl;
        cout<<"*  [2]Determinant Of Matrix    *"<<endl;
        cout<<"*  [3]Transpose Of Matrix      *"<<endl;
        cout<<"*  [4]Trace Of Matrix          *"<<endl;
        cout<<"*  [5]Addition Of Matrix       *"<<endl;
        cout<<"*  [6]Subtraction Of Matrix    *"<<endl;
        cout<<"*  [7]Inverse Of Matrix        *"<<endl;
        cout<<"*  [0]For Main Menu Press [0]  *"<<endl;
        cout<<"********************************"<<endl;
        int x;
        cout<<"Enter Your Choice: ";
        cin>>x;
        switch(x)
        {
            case 1:
                L.Mul();
                break;
            case 2:
                L.Det();
                break;
            case 3:
                L.Tran();
                break;
            case 4:
                L.Tr();
                break;
            case 5:
                L.Add();
                break;
            case 6:
                L.Sub();
                break;
            case 7:
                L.In();
                break;
            case 0:
                main();
                break;
            default:
                cout<<"invalid choice please select appropriate choice"<<endl;
        }
    }
    else if(a==2)
    {
        cout<<endl<<"*******************************************************"<<endl;
        cout<<"*  [1]delta connection  to star connection conversion *"<<endl;
        cout<<"*  [2]star connection  to delta connection conversion *"<<endl;
        cout<<"*  [3]net resistance in parallel circuit              *"<<endl;
        cout<<"*  [4]net resistance in series circuit                *"<<endl;
        cout<<"*  [5]net impedence                                   *"<<endl;
        cout<<"*  [6]net magnetic force                              *"<<endl;
        cout<<"*  [7]net electric force                              *"<<endl;
        cout<<"*  [8]solving charging circuit                        *"<<endl;
        cout<<"*  [0]For Main Menu Press [0]                         *"<<endl;
        cout<<"*******************************************************"<<endl;

        int select;
        cout<<"enter your choice of operation=";
        cin>>select;
        switch(select)
        {
            case 1:
                p1.deltatostar();
                break;
            case 2:
                p1.startodelta();
                break;
            case 3:
                p1.parallelresistor();
                break;
            case 4:
                p1.seriesresistor();
                break;
            case 5:
                p1.impedence();
                break;

            case 6:
                p1.magneticforce();
                break;
            case 7:
                p1.electricforce();
                break;
            case 8:
                p1.circuitchanger();
                break;
            case 0:
                main();
                break;
            default:
                cout<<"invalid choice please select appropriate choice";
        }
    }
    else if(a==3)
    {
        cout<<"choose your base unit from which you want to convert into another one:"<<endl<<endl;
        cout<<"****************************************"<<endl;
        cout<<"* [1] DECIMETER(dm)                    *"<<endl;
        cout<<"* [2] MILLIMETER(mm)                   *"<<endl;
        cout<<"* [3] KILOMETER (km)                   *"<<endl;
        cout<<"* [4] CENTIMETER(cm)                   *"<<endl;
        cout<<"* [5] METER(m)                         *"<<endl;
        cout<<"* [6] MICROMETER(um)                   *"<<endl;
        cout<<"* [7] YARD(yd)                         *"<<endl;
        cout<<"* [8] NAUTICAL MILE(nmi)               *"<<endl;
        cout<<"* [9] PICOMETER(pm)                    *"<<endl;
        cout<<"* [10] NANOMETER(nm)                   *"<<endl;
        cout<<"* [11] FOOT(ft)                        *"<<endl;
        cout<<"* [12] MILE(mi)                        *"<<endl;
        cout<<"* [13] INCH(in)                        *"<<endl;
        cout<<"* [0] For Main Menu Press [0]          *"<<endl;
        cout<<"****************************************"<<endl<<endl;
        int unit;
        cout<<"enter your selected unit -";
        cin>>unit;
        switch(unit)
        {
            case 1:
                cout<<"choice selected : decimeter"<<endl<<endl;
                l1.basedecimeter();
                break;
            case 2:
                cout<<"choice selected : millimeter"<<endl<<endl;
                l1.basemillimeter();
                break;
            case 3:
                cout<<"choice selected : kilometer"<<endl<<endl;
                l1.basekilometer();
                break;
            case 4:
                cout<<"choice selected : centimeter"<<endl<<endl;
                l1.basecentimeter();
                break;
            case 5:
                cout<<"choice selected : meter"<<endl<<endl;
                l1.basemeter();
                break;
            case 6:
                cout<<"choice selected : micrometer"<<endl<<endl;
                l1.basemicrometer();
                break;
            case 7:
                cout<<"choice selected : yards"<<endl<<endl;
                l1.baseyard();
                break;
            case 8:
                cout<<"choice selected : nautical miles"<<endl<<endl;
                l1.basenauticalmile();
                break;
            case 9:
                cout<<"choice selected : picometer"<<endl<<endl;
                l1.basepicometer();
                break;
            case 10:
                cout<<"choice selected : nanometer"<<endl<<endl;
                l1.basenanometer();
                break;
            case 11:
                cout<<"choice selected : foot"<<endl<<endl;
                l1.basefoot();
                break;
            case 12:
                cout<<"choice selected :mile"<<endl<<endl;
                l1.basemile();
                break;
            case 13:
                cout<<"choice selected : inch"<<endl<<endl;
                l1.baseinch();
                break;
            case 0:
                main();
                break;
            default:
                cout<<"invalid choice please select appropriate choice"<<endl;
        }
    }
    else if(a==4)
    {
        cout<<"****************************************"<<endl;
        cout<<"*  [1]Inverse Trigonometry calculator  *"<<endl;
        cout<<"*  [2]Trigonometry calculator          *"<<endl;
        cout<<"*  [3]Logarithm calculator             *"<<endl;
        cout<<"*  [4]Factorial calculator             *"<<endl;
        cout<<"*  [5]Cube Root calculator             *"<<endl;
        cout<<"*  [6]Area Of Triangle calculator      *"<<endl;
        cout<<"*  [0]For Main Menu Press [0]          *"<<endl;
        cout<<"****************************************"<<endl;
        int select;
        cout<<"enter your choice of operation = ";
        cin>>select;
        switch(select)
        {
            case 1:
                a1.ITF();
                break;
            case 2:
                a1.TF();
                break;
            case 3:
                a1.Log();
                break;
            case 4:
                a1.Factorial();
                break;
            case 5:
                a1.CubeRoot();
                break;
            case 6:
                a1.AOT();
                break;
            case 0:
                main();
                break;
            default:
                cout<<"Invalid choice please select appropriate choice";
        }
    }
    else if(a==5)
    {
        cout<<"***************************"<<endl;
        cout<<"*  [1]Addition            *"<<endl;
        cout<<"*  [2]Subtraction         *"<<endl;
        cout<<"*  [3]Division            *"<<endl;
        cout<<"*  [4]Multiplication      *"<<endl;
        cout<<"*[0]For Main Menu Press[0]*"<<endl;
        cout<<"***************************"<<endl;
        int select;
        cout<<"enter your choice of operation = ";
        cin>>select;
        switch(select)
        {
            case 1:
                A1.add();
                break;
            case 2:
                A1.sub();
                break;
            case 3:
                A1.div();
                break;
            case 4:
                A1.mul();
                break;
            case 0:
                main();
                break;
            default:
                cout<<"Invalid choice please select appropriate choice";
        }
    }
    return 0;
}









