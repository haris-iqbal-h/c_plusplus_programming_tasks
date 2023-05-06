class base1 {
  public:
      void someFunction( ) {....}  
};
class base2 {
    void someFunction( ) {....} 
};
class derived : public base1, public base2 {};

int main() {
    derived obj;
    // obj.someFunction() // Error!  

    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction(); 
}