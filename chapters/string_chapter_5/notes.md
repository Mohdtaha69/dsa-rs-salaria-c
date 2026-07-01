# what are strings?
    character arrays are called "strings"
    the qoutes (') or(") must be used with scape sequence 
# declaration 
    ```
    char mess []= {'y','o','u','\0'};

    or

    char mess[] = "you'

    ```
    strings can be represneted by arrays or pointer
# operations on strings
    length
    copy
    concatenate
    reverse 
    left substring
    right substring
    mid substring
    uppercase 
    lowercase
    
## length
    ```
    int length(char * ptr){
        int len =0
        while(*ptr++){
            len++;
        }
    return len;
    }
    ```

## copying a string

    ```
    void strcopy(char * dest , char * source){
        char * ptr1,ptr2;
        ptr1 = source;
        ptr2 = dest;
        while(*ptr1){
            *ptr2 = *ptr1;
            ptr1++;
            ptr2++;

        }
        *ptr2 = '\0';
    }
    ```

