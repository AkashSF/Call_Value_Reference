# Call by Value & Call by Reference
## Aim
    Implementation of call by value and call by reference for a function.
## Theory
### Call by Value
    Call by value method copies the value of an argument into the formal parameter of that function. In this parameter passing method, values of actual parameters are copied to function's formal parameters, and the parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of the caller.
### Call by Reference
    Call by reference method copies the address of an argument into the formal parameter. In this method, the address is used to access the actual argument used in the function call. It means that changes made in the parameter alter the passing argument.In this method, the memory allocation is the same as the actual parameters. All the operation in the function are performed on the value stored at the address of the actual parameter, and the modified value will be stored at the same address. We use the concept of pointers to implement this.
## Conclusion
    In these two programs we learnt how to apply call by value and call by reference to a function.
