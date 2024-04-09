class ComplexNumber
{
public:

    double real, imag; //definisco i membri della classe

    ComplexNumber(double real, double imag) : real(real), imag(imag) {}


    void print() const //definisco un modo per stampare il numero complesso
    {
        if (imag < 0) //a-bi
        {
            std::cout << real << imag << "i" << std::endl;
        }
        else //a+bi
        {
            std::cout << real << "+" << imag << "i" << std::endl;
        }
    }


    ComplexNumber operator+(const ComplexNumber& other) const //definisco l'operatore +
    {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    bool operator==(const ComplexNumber& other) const //definisco l'operatore ==
    {
        return real == other.real && imag == other.imag;
    }

    ComplexNumber coniugato() const //definisco la funzione per il calcolo del coniugato
    {
        return ComplexNumber(real, -imag);
    }
};
