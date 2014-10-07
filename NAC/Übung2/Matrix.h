#pragma once // Durch headerguard ersetzen
class Matrix
{
protected:
	int m_Zeilen;
	int m_Spalten;
	float m_Element[2];

public:
	Matrix(void);
	void ausgabe();

	virtual ~Matrix(void);
};

