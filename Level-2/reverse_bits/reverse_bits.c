unsigned char reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;

    while (i > 0)
    {
        res = res * 2 + (octet % 2); // res * 2 her adımda res değerine yeni bir bit eklemek için
        octet = octet / 2;  // bitleri sağa kaydırmak için
        i--;
    }
    return (res);
}