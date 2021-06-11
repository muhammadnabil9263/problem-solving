public class Relational {
    
    
    int numerator ; 
    int denominator ;

    public  Relational (){
        this.numerator      = 0; 
        this.denominator    = 1; 
    }

    public   Relational (int numerator , int denominator ){
        this.numerator     =  numerator; 
        this.denominator   = denominator; 
    }
    public  Relational (int wholeNumber){
        this.numerator=wholeNumber;
        this.denominator=1 ; 
    }




    static Relational add (Relational r1 , Relational r2 ){
        Relational result = new Relational();
        result.numerator = (r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);    
        result.denominator = r1.denominator*r2.denominator;    
    return result ;}




    static Relational sub (Relational r1 , Relational r2 ){
        Relational result = new Relational();
        result.numerator = (r1.numerator*r2.denominator)-(r2.numerator*r1.denominator);    
        result.denominator = r1.denominator*r2.denominator;

    return result;}

    static Relational mult (Relational r1 , Relational r2){
        Relational result = new Relational();
        result.numerator = (r1.numerator*r2.denominator);    
        result.denominator = r1.denominator*r2.denominator;

    return result ;}
    
    static Relational dev(Relational r1 , Relational r2){
        Relational result = new Relational();
        result.numerator = r1.numerator*r2.denominator;    
        result.denominator = r1.denominator/r2.numerator;
    return result ;}
   

     
    public int getNumerator() {
        return this.numerator;
    }

    public void setNumerator(int numerator) {
        this.numerator = numerator;
    }

    public int getDenominator() {
        return this.denominator;
    }

    public void setDenominator(int denominator) {
        this.denominator = denominator;
    }

    @Override
    public String toString() {
        return "{" +
            " numerator='" + getNumerator() + "'" +
            ", denominator='" + getDenominator() + "'" +
            "}";
    }


    void add (Relational r){
        
        this.numerator = (this.numerator*r.denominator)+(this.numerator*r.denominator);    
        this.denominator = this.denominator*r.denominator;    
    }
    void sub (Relational r){
        this.numerator = (this.numerator*r.denominator)+(this.numerator*r.denominator);    
        this.denominator = this.denominator * r.denominator;
    }
    void mul (Relational r){
        this.numerator = this.numerator*r.numerator;
        this.denominator = this.denominator*r.denominator;
    }
    void dev (Relational r){
        this.numerator = this.numerator*r.denominator;
        this.denominator = this.denominator*r.numerator;
    }
}
