#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex{
    private:
        double imaginary;
        double real;


    public:
    /**
     * Construct a new Complex object
     * @contract <><> ---> <>
     * 
     */
    Complex();
    /**
     * Destroy the Complex object
     * @contract <><> ---> <>
     * 
     */
    ~Complex();

   
    /**
     * Get the imaginary number
     * @contract <getImag><> ---> <double>
     * 
     * @return double 
     */
    double getImag();

    /**
     * Get the Real of the object
     * @contract <getReal><> ---> <double>
     * 
     * @return double 
     */
    double getReal();

    /**
     * Set the Real of the object 
     * @contract <setReal><double> ---> <void>
     * 
     * @param r represents a real number
     */
    void setReal(double r);

    /**
     * Set the Imag of the object 
     * @contract <setImag><double> ---> <void>
     * 
     * @param i represents an imaginary number
     */
    void setImag(double i);
    
};

#endif