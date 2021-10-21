int state = HIGH;
int previous = LOW;

void setup()
{
    pinMode(13, OUTPUT);
    pinMode(27, INPUT);
}

void loop()
{
    int val = digitalRead(27);

    if (val == HIGH && previous == LOW)
    {
        if (state == HIGH)
            state = LOW;
        else
            state = HIGH;
    }

    digitalWrite(13, state);
    previous = val;
}