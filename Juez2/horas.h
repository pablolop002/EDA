// Pablo Lopez Veleiro
// E27

#ifndef _HORAS
#define _HORAS

#include <iostream>
#include <iomanip>
#include <stdexcept>

class horas {
private:
    int _h;
    int _m;
    int _s;

    static bool check(int h, int m, int s) {
        return h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60;
    }

public:
    horas(int h = 0, int m = 0, int s = 0) {
        if (!check(h, m, s))
            throw std::invalid_argument("valores invalidos");
        else {
            _h = h;
            _m = m;
            _s = s;
        }
    }

    // observadoras
    int hora() const { return _h; }

    int minuto() const { return _m; }

    int segundo() const { return _s; }

    // operador de comparacion
    bool operator<(horas const &h) const {
        if (_h < h._h) return true;
        else if (_h > h._h) return false;
        else if (_m < h._m) return true;
        else if (_m > h._m) return false;
        else return _s < h._s;
    }

    horas operator+(horas const &h) {
        _s += h._s;
        if (_s > 59) {
            _m += _s / 60;
            _s = _s % 60;
        }
        _m += h._m;
        if (_m > 59) {
            _h += _m / 60;
            _m = _m % 60;
        }
        _h += h._h;
        if (_h > 23) {
            throw std::domain_error("Se supera las 24 horas");
        }
        return *this;
    }

    /*
     * horas::operator+(const horas & h) const{
     *      int horas = 0, min = 0, sec = 0;
     *      seg = _s + h._s;
     *      if(seg > 59){
     *          min++;
     *          seg = seg - 60;
     *      }
     *      min = min + _m + h._m;
     *      if(min > 59){
     *          horas++;
     *          min = min - 60;
     *      }
     *      horas = horas + _h + h._h;
     *      if(horas > 23){
     *          throw "otro dia";
     *      }
     *      return horas(horas, min, sec);
     * }
     */

    void read(std::istream &i = std::cin) {
        char aux;
        int h, m, s;
        i >> h >> aux >> m >> aux >> s;
        if (!check(h, m, s))
            throw std::invalid_argument("valores invalidos");
        else {
            _h = h;
            _m = m;
            _s = s;
        }
    }

    void print(std::ostream &o = std::cout) const {
        o << std::setfill('0') << std::setw(2) << _h << ':'
          << std::setfill('0') << std::setw(2) << _m << ':'
          << std::setfill('0') << std::setw(2) << _s;
    }
};

inline std::ostream &operator<<(std::ostream &salida, horas const &h) {
    h.print(salida);
    return salida;
}

inline std::istream &operator>>(std::istream &entrada, horas &h) {
    h.read(entrada);
    return entrada;
}

#endif
