// #include<iostream>
// using namespace std;

// class complex{
//     float real;
//     float imag;

//     public:
//         void setValues(float r,float i){
//             real = r;
//             imag = i;
//         }

//         static complex multiply(const complex &c1, const complex &c2){
//             complex result;
//             result.real = c1.real * c2.real - c1.imag * c2.imag;
//             result.imag = c1.real * c2.imag + c1.imag * c2.real;
//             return result;
//         }

//         void display(){
//             if(imag>=0){
//                 cout<< real <<" + "<< imag <<"i"<<endl;
//             }
//             else{
//                 cout<< real <<" - "<< -imag<<"i"<<endl;
//             }
//         }
// };

// int main(){
//     complex c1, c2, result;

//     float real1, imag1, real2, imag2;

//     cout<<"Enter real and imaginary part of first complex number: ";
//     cin>> real1 >> imag1;
//     c1.setValues(real1,imag1);

//     cout<<"Enter real and imaginary part of seconde complex number: ";
//     cin>> real2 >> imag2;
//     c2.setValues(real2,imag2);
// }


#include<iostream>
using namespace std;

class Complex{
    float real;
    float imag;

    public:
        void setValues(float r, float i){
            real = r;
            imag = i;
        }

        static Complex multiply(const Complex &c1,const Complex &c2){
            Complex result;
            result.real = c1.real * c2.real - c1.imag * c2.imag;
            result.imag = c1.real * c2.imag - c1.imag * c2.real;
        }

        void display(){
            if(imag>=0){
                cout<<real<<" + "<<imag<< "i"<<endl;
                cout<<real<<" - "<<-imag<<"i"<<endl;
            }
        }

};

int main(){
    Complex c1,c2,result;

    float real1, real2, imag1, imag2;

    cout<<"Enter the real and imag part of first complex number: ";
    cin>>real1>>imag1;
    c1.setValues(real1,imag1);

    cout<<"Enter the real and imag part of second complex number: ";
    cin>>real2>>imag2;
    c2.setValues(real2,imag2);

    result = Complex::multiply(c1,c2);

    cout<<"Result of multiplication: ";
    result.display();

    return 0;
}