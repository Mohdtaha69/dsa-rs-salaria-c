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
   ### 1.5.2.1 the while statement 
    ```
    while(expression){
        statement
    }
    ```
   ### 1.5.2.2 the for statement
    ```
    for(init;test;change){
        statement
    }
    ```

   ### 1.5.2.3 do while
   ```
   do{
    statement 
   }
   while(expression);

   ```
   ### 1.5.2.4 nesting of loops
   nesting of loops is also possible 

  ## 1.5.3 jumping statement 
  ### 1.5.3.1 break
    use to terminate statment  
  ### 1.5.3.2 continue 
    use to skip that iteration 
  ### 1.5.3.2 goto statment 
    ```
    goto label:
        statment
    label:
    ```
# 1.6 memory use in c
when program runs
os assign memory in different section
  - code area -> named_TEXT program resides
  - data area -> further devided into 3 section 
    -- DATA - global uninitialized and initialized data and uninitialize static data
    -- CONST - constant stored in variables
    -- BLOCK STARTED SEGMENT (BSS) -> contains uninitialize static data
  - stack area -> grows towards loweer memory as it filled 
  - heap -> grows toward high memory as it filled
     - we need to maintain allocation of memory from this section

# 1.7 pointers 


