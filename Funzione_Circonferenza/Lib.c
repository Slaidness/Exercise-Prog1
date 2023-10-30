const float pi_greco=3.14;

float calcolo_circonferenza(float raggio)
{

    float risultato;
    risultato=2.0f*pi_greco*raggio;
    return risultato;
}

float calcolo_area(float raggio)
{
    float risultato;
    risultato=(raggio*raggio)*pi_greco;
    return risultato;
}


