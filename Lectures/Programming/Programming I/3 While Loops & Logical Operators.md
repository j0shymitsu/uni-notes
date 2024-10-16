
Date: 11/10/24
Topics: Java, while loops, logical operators

---

## Key Concepts

-  While loops run a piece of code until a condition is met
<<<<<<< HEAD
-  
-
=======
>>>>>>> origin/main

---


## Detailed Notes

```java
import java.util.Scanner;

  

public class WhileLoop

{

    public static void main(String[] args)

    {

        int count = 0;

        String test = "";

  

        while(count < 10)

        {

            System.out.println("HELLO");

            count++;

  

            System.out.println("Do you wish to continue? (Type 1 to continue)");

            Scanner scanner = new Scanner(System.in);

            int response = scanner.nextInt();

  

            if (response != 1)

            {

                break;

            }

        }

  

    }

}
```



---

## To-do

- [ ] 

---

## Reading List

- [ ] 