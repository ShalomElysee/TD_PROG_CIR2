class Vecteur {
private:
    float a, b;  // Composantes du vecteur

public:
    // Constructeurs
    vecteur();
    vecteur(const float& a_, const float& b_);

    // Getters
    float geta() const;
    float getb() const;

    // Setters
    void setab(const float& a_, const float& b_);
    void seta(const float& a_);
    void setb(const float& b_);

    // Méthodes
    static Vecteur somme(const Vecteur& vecteur1, const Vecteur& vecteur2);
    static Vecteur produitreel(const float reel, const Vecteur& vecteur);
};
