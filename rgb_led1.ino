int redPin = 11;
int bluePin = 10;
int greenPin = 9;

/*
	Chức năng hàm: Điều khiển màu bóng đèn RGB
	Input:
    	+ _red: giá trị màu đỏ
    	+ _green: giá trị màu xanh lá cây
    	+ _blue: giá trị màu xanh nước biển
    Output:
    	Không có
*/
int changeColor(int _red, int _green, int _blue){
  analogWrite(redPin, _red);
  analogWrite(bluePin, _blue);
  analogWrite(greenPin, _green);
}

// C++ code
//
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  changeColor(47, 79, 79);
  delay(2000);
  changeColor(72, 61, 139);
  delay(2000);
  changeColor(240, 230, 140);
  delay(2000);
}