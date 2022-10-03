// Samuel Peel
// CSCI 130
// 10-1-22
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t; // number of classmates
  int d; // day
  string m; //month
  int m_i; // month integer 

  m_i = 0;
  cin >> t;

  for(int i=0; i < t ; i++)
  {
  cin >> d;
  cin >> m;
    
    {
  if( m == "Jan")
    m_i = 1;

  else if( m == "Feb")
    m_i = 2;

  else if( m == "Mar")
    m_i = 3;

  else if( m == "Apr")
    m_i = 4;

  else if( m == "May")
    m_i = 5;

  else if( m == "Jun")
    m_i = 6;

  else if( m == "Jul")
    m_i = 7;

  else if( m == "Aug")
    m_i = 8;

    else if( m == "Sep")
    m_i = 9;
    
    else if( m == "Oct")
    m_i = 10;

    else if( m == "Nov")
    m_i = 11;

    else if( m == "Dec")
    m_i = 12;
    }
    // Now calculate output
    {
      if((m_i == 1) && (d <= 20))
        cout << "Capricorn" << endl;
      if((m_i == 1) && (d >= 21))
        cout << "Aquarius" << endl;
      if((m_i == 2) && (d <= 19))
        cout << "Aquarius" << endl;
      if((m_i == 2) && (d >= 19))
        cout << "Pisces" << endl;
      if((m_i == 3) && (d <= 20))
        cout << "Pisces" << endl;
      if((m_i == 3) && (d >= 21))
        cout << "Aries" << endl;
      if((m_i == 4) && (d <= 20))
        cout << "Aries" << endl;
      if((m_i == 4) && (d >= 21))
        cout << "Taurus" << endl;
      if((m_i == 5) && (d <= 20))
        cout << "Taurus" << endl;
      if((m_i == 5) && (d >= 21))
        cout << "Gemini" << endl;
      if((m_i == 6) && (d <= 21))
        cout << "Gemini" << endl;
      if((m_i == 6) && (d >= 23))
        cout << "Cancer" << endl;
      if((m_i == 7) && (d <= 22))
        cout << "Cancer" << endl;
      if((m_i == 7) && (d >= 23))
        cout << "Leo" << endl;
      if((m_i == 8) && (d <= 22))
        cout << "Leo" << endl;
      if((m_i == 8) && (d >= 23))
        cout << "Virgo" << endl;
      if((m_i == 9) && (d <= 21))
        cout << "Virgo" << endl;
      if((m_i == 9) && (d >= 22))
        cout << "Libra" << endl;
      if((m_i == 10) && (d <= 22))
        cout << "Libra" << endl;
      if((m_i == 10) && (d >= 23))
        cout << "Scorpio" << endl;
      if((m_i == 11) && (d <= 22))
        cout << "Scorpio" << endl;
      if((m_i == 11) && (d >= 23))
        cout << "Sagittarius" << endl;
      if((m_i == 12) && (d <= 21))
        cout << "Sagittarius" << endl;
      if((m_i == 12) && (d >= 22))
        cout << "Capricorn" << endl;
    }
  }
}