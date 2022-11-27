#pragma once

template <class T>
class Var
{
private:
	T value;
public:
	Var() {
		value = NULL;
	}
	Var(T value) {
		this->value = value;
	}
	T Get() {
		return value;
	}
	T operator = (T value) {
		this->value = value;
		return value;
	}
	T operator = (Var obj) {
		value = obj.Get();
		return value;
	}
	void operator --() {
		--value;
	}
	void operator --(int) {
		--value;
	}
	void operator +=(T value) {
		this->value += value;
	}
	void operator +=(Var<T> obj) {
		value += obj.Get();
	}
	void operator -=(T value) {
		this->value -= value;
	}
	void operator -=(Var<T> obj) {
		value -= obj.Get();
	}
	void operator *=(T value) {
		this->value *= value;
	}
	void operator /=(Var<T> obj) {
		value /= obj.Get();
	}
	T operator +(T value) {
		return value + obj.Get();;
	}
	T operator +(Var<T> obj) {
		return value + obj.Get();;
	}
	T operator -(T value) {
		return value - obj.Get();;
	}
	T operator -(Var<T> obj) {
		return value - obj.Get();;
	}
	T operator *(T value) {
		return this->value * value;;
	}
	T operator *(Var<T> obj) {
		return value * obj.Get();;
	}
	T operator /(Var<T> obj) {
		return value / obj.Get();;
	}
	T operator /(T value) {
		return this->value / value;;
	}
	bool operator <(T value) const {
		if (this->value < value) return 1;
		return 0;
	}
	bool operator <(Var<T> obj) const {
		if (value < obj.Get()) return 1;
		return 0;
	}
	bool operator >(T value) const {
		if (this->value > value) return 1;
		return 0;
	}
	bool operator >(Var<T> obj) const {
		if (value > obj.Get()) return 1;
		return 0;
	}
	bool operator <=(T value) const {
		if (this->value <= value) return 1;
		return 0;
	}
	bool operator <=(Var<T> obj) const {
		if (value <= obj.Get()) return 1;
		return 0;
	}
	bool operator >=(T value) const {
		if (this->value > value) return 1;
		return 0;
	}
	bool operator >=(Var<T> obj) const {
		if (value > obj.Get()) return 1;
		return 0;
	}
};

