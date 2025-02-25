#include "Video.hpp"

Video::Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep)
    : _nome(nome), _ano(ano), _genero(genero), _subtipo(subtipo), _filme_duracao(filme_duracao), _n_temp(n_temp), _total_ep(total_ep)
{}

float Video::get_media_avaliacao() {
    float v = 0;

    for (auto n : avaliacoes){
        v += n;
    }

    return v/avaliacoes.size();
}

void Video::avaliar(int nota) {
    avaliacoes.push_back(nota);
}

void Video::print_info(int id){
    if (_subtipo == "Filme") 
    {
        cout << "Filme " << id << ":";
        cout << _nome;
        cout << " (" << _ano << "), ";
        cout << _genero;
        cout << ", " << _filme_duracao << " min, ";
        cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    if (_subtipo == "Serie")
    {
        cout << "Serie " << id << ":";
        cout << _nome;
        cout << " (" << _ano << "), ";
        cout << _genero << ", ";
        cout << _n_temp << " temporadas, ";
        cout << _total_ep << " episodios, ";
        cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}