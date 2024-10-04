// // // #include <stdio.h>

// // // void main()
// // // {
// // //     char str[100];
// // //     int i = 0;

// // //     // Get the input string from the user
// // //     printf("Enter any string: ");
// // //     fgets(str, sizeof(str), stdin);

// // //     // Convert each character to uppercase
// // //     while (str[i] != '\0')
// // //     {
// // //         // Check if the character is a lowercase letter
// // //         if (str[i] >= 'a' && str[i] <= 'z')
// // //         {
// // //             // Convert to uppercase by subtracting 32
// // //             str[i] = str[i] - 32;
// // //         }
// // //         i++;
// // //     }

// // //     // Output the uppercase string
// // //     printf("Uppercase string: %s", str);

// // //     return 0;
// // // }

// // #include <stdio.h>

// // void main()
// // {
// //     char input_string[100];     // Array to hold the input string
// //     char lowercase_string[100]; // Array to hold the lowercase string
// //     int i = 0;

// //     // Prompt user for input
// //     printf("Enter any string: ");
// //     fgets(input_string, sizeof(input_string), stdin); // Read input including spaces

// //     // Process each character in input_string
// //     while (input_string[i] != '\0')
// //     {
// //         // Check if the character is an uppercase letter
// //         if (input_string[i] >= 'A' && input_string[i] <= 'Z')
// //         {
// //             // Convert to lowercase by adding 32
// //             lowercase_string[i] = input_string[i] + 32;
// //         }
// //         else
// //         {
// //             // Keep the character unchanged if it's not uppercase
// //             lowercase_string[i] = input_string[i];
// //         }
// //         i++;
// //     }

// //     lowercase_string[i] = '\0'; // Null-terminate the lowercase string

// //     // Output the result
// //     printf("Lowercase string: %s", lowercase_string);

// // }

// #include <stdio.h>

// void main()
// {
//     char input_string[100];  // Array to hold the input string
//     char toggle_string[100]; // Array to hold the toggle case string
//     int i = 0;

//     // Prompt user for input
//     printf("Enter any string: ");
//     fgets(input_string, sizeof(input_string), stdin); // Read input including spaces

//     // Process each character in input_string
//     while (input_string[i] != '\0')
//     {
//         // Check if the character is an uppercase letter
//         if (input_string[i] >= 'A' && input_string[i] <= 'Z')
//         {
//             // Convert to lowercase by adding 32
//             toggle_string[i] = input_string[i] + 32;
//         }
//         // Check if the character is a lowercase letter
//         else if (input_string[i] >= 'a' && input_string[i] <= 'z')
//         {
//             // Convert to uppercase by subtracting 32
//             toggle_string[i] = input_string[i] - 32;
//         }
//         else
//         {
//             // Keep the character unchanged if it's not a letter
//             toggle_string[i] = input_string[i];
//         }
//         i++;
//     }

//     toggle_string[i] = '\0'; // Null-terminate the toggle case string

//     // Output the result
//     printf("Toggle case string: %s", toggle_string);

// }