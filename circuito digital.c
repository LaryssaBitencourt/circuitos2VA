#define la 2
#define lb 3
#define lc 4
#define ld 5
#define le 6
#define lf 7
#define lg 8

#define pr 9
#define seg 10
#define ter 11
#define quat 12


void setup()
{
  pinMode(la, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(lc, OUTPUT);
  pinMode(ld, OUTPUT);
  pinMode(le, OUTPUT);
  pinMode(lf, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(pr, INPUT);
  pinMode(seg INPUT);
  pinMode(ter, INPUT);
  pinMode(quat, INPUT);
  
}

void loop()
{
  int a = digitalRead(pr);
  int b = digitalRead(seg);
  int c = digitalRead(ter);
  int d = digitalRead(quat);
  
  letraA(a, b, c, d);
  
}

void letraA(int a, int b, int c, int d){
  bool acende = (!b&&!d) || (b&&c) || (a&&!c&&!d) || (a&&!b&&!c) || (!a&&c&&d) || (!a&&b&&d);
  digitalWrite(la, acende);
}
void letraB(int a, int b, int c, int d){
  bool acende = (!a&&!b) || (!b&&!d) || (a&&!c&&d) || (!a&&!c&&!d) || (!a&&c&&d);
  digitalWrite(lb, acende);
}
void letraC(int a, int b, int c, int d){
  bool acende = (!a&&!c) || (a&&!b) || (a&&!c&&d) || (!a&&c&&d) || (!a&&B&&c);
  digitalWrite(lc, acende);
}
void letraD(int a, int b, int c, int d){
  bool acende = (a&&!c) || (!a&&!b&&!d&&) || (!a&&!b&&c) || (b&&c&&!d) || (a&&!b&&d) || (b&&!c&&d);
  digitalWrite(ld, acende);
}
void letraE(int a, int b, int c, int d){
  bool acende = (!a&&!b&&!d) || (a&&c) || (a&&!b&&!d) || (a&&b&&!c) || (!a&&c&&!d);
  digitalWrite(le, acende);
}
void letraF(int a, int b, int c, int d){
  bool acende = (!c&&!d) || (!a&&b&&!c) || (b&&c&&!d) || (a&&!b&&d) || (a&&c);
  digitalWrite(lf, acende);
}
void letraG(int a, int b, int c, int d){
  bool acende = (!a&&b&&!c) || (a&&!b) || (!a&&!b&&c) || (a&&d) || (c&&!d);
  digitalWrite(lg, acende);
}

