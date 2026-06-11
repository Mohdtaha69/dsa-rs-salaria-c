#  1.1 introduction
 we need indepth knowledge of c this chapter revised some basic concept in c 
# 1.2 enumerated data type
 we can define our own data-type with enum 
- syntax 
```
enum datatype {Value1, value2, ....}
enum datatype var_name
```
# 1.3 void data type
  help to tell compiler that this function does not return something or does not take something as argument or use to declare generic pointer 
# 1.4 type defination 
  ```
  typedef dataype identifier;

  ```
# 1.5 control statement
  1. decision making 
  2. looping
  3. jumping statement 

## 1.5.1 decision making
  execute selective statements only 
  ### 1.5.1.1 the if statements 
   ```
   if(expression)
   {
    statement 
   }
   
   ```
   ### 1.5.1.2 the if-else  statements 
   ```
   if(expression)
   {
    statement 
   }
   else {
    statement
   }
   
   ```

   ### 1.5.1.3 the else-if statements 
   ```
   if(expression)
   {
    statement 
   }
   else if(expression)
    statement 
   .
   .
   .
   else{
    statement
   }
   ```
   ### 1.5.1.4 the switch statements 
   ```
   switch(expression){
    case value1:
        statement
        break;
    case value2:
        statement
        break;
    case value3:
        statement
        break;
   }
    default:
        statement;
   ```
   ## 1.5.2 the looping statement
   
