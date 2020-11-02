class Wektor2D
{
  public:
    // Tutaj napisz implementacje klasy Wektor2D
    Wektor2D()
    {
      x = 0;
      y = 0;
    }
    Wektor2D(double a, double b)
    {
      x = a;
      y = b;
    }
    void setX(double a)
    {
      x = a;
    }
    void setY(double b)
    {
      y = b;
    }
    double getX()
    {
      return x;
    }
    double getY()
    {
      return y;
    }
  private:
  double x;
  double y;
};
Wektor2D operator+(Wektor2D a, Wektor2D b)
{
  Wektor2D suma();
  double xk = a.getX() + b.getX();
  double yk = a.getY() + b.getY();
  suma.setX(xk);
  suma.setY(yk);
  return suma;
}
double operator*(Wektor2D a, Wektor2D b)
{
  double iloczyn;
  double xk = a.getX() * b.getX();
  double yk = a.getY() * b.getY();
  iloczyn = xk+yk;
  return iloczyn;
}
