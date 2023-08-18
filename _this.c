#include "main.h"

#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (const char *ptr = format; *ptr != '\0'; ++ptr) {
        if (*ptr == '%') {
            // Handle format specifier
            // Extract flags, field width, precision, and conversion specifier
            
            // Check for the '-' flag
            int left_justify = 0;
            ++ptr;
            if (*ptr == '-') {
                left_justify = 1;
                ++ptr;
            }
            
            // Extract the field width and precision (you'll need to implement this)
            // ...

            // Extract the conversion specifier (you'll need to implement this)
            // ...

            // Perform the conversion and formatting
            if (conversion_specifier == 's') {
                // Handle string conversion
                const char *str_arg = va_arg(args, const char *);
                // Format and print the output (adjusting width and justification)
                // ...
            }
            else if (conversion_specifier == 'd') {
                // Handle integer conversion
                int int_arg = va_arg(args, int);
                // Format and print the output (adjusting width and justification)
                // ...
            }
            // Handle other conversion specifiers

        } else {
            // Output non-format characters
            putchar(*ptr);
        }
    }

    va_end(args);
}

