#ifndef SERIALIZER_CLASS_HPP
#define SERIALIZER_CLASS_HPP

class Serializer {

public:
  Serializer();
  Serializer(void *);
  Serializer(Serializer const &);
  Serializer &operator=(Serializer const &);

  ~Serializer();
  doSer();
  undoSer();

private:
  typedef struct s_Ser {
    char _s[9];
    int _n;
    char _c[9];
  } _t_ser;
  _t_ser _s;
  typedef struct s_Dt {
    std::string _s;
    int _n;
    std::string _c;
  } _t_dt;
  t_dt _d;
};

#endif
