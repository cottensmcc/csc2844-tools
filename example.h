class Example
{
    public:
        // Print value of num member variable
        void print() const;
        
        // Return value of num member variable
        int getNum() const;
        
        // Assign value of parameter to num member variable
        void setNum(int);

        // Parameterized constructor to set num to a default value
        Example(int n);

        // Default constructor
        Example();

    private:
        int num;

};