import 'dart:io';

void main() {
  int A = int.parse(stdin.readLineSync());
  int B = int.parse(stdin.readLineSync());
  int produto = A * B;
  print('PROD = $produto');
}