/**
 * @file Fraction.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-11-06
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction{

  private:
    int numerator;
    int denominator;

  public:
    /**
     * Construct a new Fraction object
     * @contract <Fraction><> ---> <obj>
     * @deprecated
     * @see Fraction(int numerator, int denominator);
     */
    Fraction();

    /**
     * Construct a new Fraction object
     * @contract <Fraction><int><int> ---> <obj>
     * 
     * @param numerator 
     * @param denominator 
     */
    Fraction(int numerator, int denominator);

    /**
     * Construct a new Fraction object
     * @contract <Fraction><Fraction> ---> <obj>
     * 
     * @param aFraction 
     */
    Fraction(Fraction& aFraction);

    /**
     * Destroy the Fraction object
     * @contract <~Fraction><> ---> <obj>
     * 
     */
    ~Fraction();

    /**--** getters and setters **--**/

    int getDenominator();

    int getNumerator();

    void setDenominator(int denominator);
    
    void setNumerator(int numerator);

    void getFraction();

    /**--** other methods **--**/
    /**
     * Overload operator +
     * @contract <operator+><int> ---> <Fraction>
     * @return value 
     */
    Fraction& operator+(int value);

    /**
     * Overload operator +
     * @contract <operator+><Fraction> ---> <Fraction>
     * @return Fraction& 
     */
    Fraction& operator+(Fraction aFraction);

    /**
     * Overload operator *
     * @contract <operator+><int> ---> <Fraction>
     * @return value 
     */
    Fraction& operator-(int value);

    /**
     * Overload operator -
     * @contract <operator-><Fraction> ---> <Fraction>
     * @return Fraction& 
     */
    Fraction& operator-(Fraction aFraction);
    
    /**
     * Overload operator *
     * @contract <operator*><int> ---> <Fraction>
     * @return value 
     */
    Fraction& operator*(int value);

    /**
     * Overload operator *
     * @contract <operator*><Fraction> ---> <Fraction>
     * @return Fraction& 
     */
    Fraction& operator*(Fraction aFraction);
};
#endif
