// The Q&A section shows how to use a letter as an array subscript. Describe how to use a
// digit (in character form) as a subscript.

//##### ANSWER #####//

/*Like in the Q&A section we can scale the array to fit within the range. 
For example if we had the array int digit_count[10] we can scale it through subtracting
the char '0' as that comes first in the ASCII character set digit_count[ch - '0'].
Like with subscripting for letters it is bound to only have 10 elements and relys on 
the digits to be in a consecutive order.*/