#include <Wire.h>
#include <stdlib.h>

String temp[4] = {"cold ", "too cold ", "hot ", "too hot "};
String result;

void setup() {
        Wire.begin(8);
        Wire.onRequest(requestEvent);
}

void loop(){
}

void requestEvent(){
        result = temp[random(0-5)];
        Wire.write("too hot ");
}
