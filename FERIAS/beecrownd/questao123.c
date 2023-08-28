// Certa manhã, no verão passado, Charlotte estava observando a lua e o sol e observou que a lua estava cheia. Como ela mora ao longo da costa atlântica, ela sabe que isso significa uma variação maior da maré em comparação com o primeiro e último quarto. Sem chuva no ar, parecia uma semana perfeita para passeios na praia pelos penhascos.

// A maré é perigosa ao caminhar na praia entre o mar e o pennhasco. Conforme a água sobe, você pode ficar preso. Portanto, é importante planejar a caminhada de acordo com o comportamento da maré.

// Uma maneira simples de planejar a caminhada do penhasco é começar a caminhar e virar na maré baixa. O problema é que em uma praia rochosa, você quer que as pedras sequem por uma hora antes de entrar nelas. Portanto, poderia ser seguro continuar a caminhada um pouco mais, mesmo após a maré baixa. Note que a praia é maioritariamente de areia e as rochas apresentam muitas fendas, pelo que assumimos que todas as zonas são inundadas ou drenadas no momento exato em que a maré atinge o seu pico, independentemente das alturas das zonas vizinhas.

// A praia foi pesquisada e está disponível um mapa onde cada quadrado de 10 × 10m tem uma determinada altura. Cada quadrado só pode ser acessado a partir dos quatro quadrados vizinhos ao norte, sul, leste e oeste. Só é possível passar entre dois quadrados de altura z1, z2 se a diferença de altura absoluta | z1 - z2 | é no máximo 1 metro. Charlotte anda de tal maneira que leva um tempo constante para passar de um quadrado para o outro e durante todo o período ambos os quadrados devem estar secos. Charlotte também pode decidir ficar em uma quadrado por qualquer período de tempo.

// A maré se comporta de maneira diferente em diferentes lugares da Terra, dependendo do fundo do mar, linha costeira, etc. Charlotte sabe que é possível aproximar o nível da água da maré v em metros como v = 0,5a · (cos (t (2π / 12) + 1), onde t é o tempo em horas desde a última maré alta e a é a altura em metros dependendo da localização, época do ano, etc.

// Charlotte vai começar e terminar sua caminhada em sua casa. Ela limita seu tempo fora de casa a apenas um intervalo de maré, então você pode presumir que 0,0 ≤ t ≤ 12,0. Quão longe de casa ela consegue chegar e ainda assim retornar com segurança de volta?

// Entrada
// A primeira linha da entrada contém dois números de ponto flutuante a, 0,0 <a <15,0 e m, 0,1 ≤ m ≤ 60,0, o número de segundos que leva para passar um quadrado no mapa. A segunda linha contém quatro inteiros W, H, X e Y onde 1 ≤ W, H ≤ 200, 0 ≤ X <W e 0 ≤ Y <H. W e H são a largura e a altura do mapa da costa, X e Y descrevem a coordenada (X, Y) da casa de Charlotte.

// Em seguida, seguem H linhas, cada uma contendo W inteiros separados por espaço, descrevendo a altura em milímetros de cada quadrado de 10 × 10m pesquisado em comparação com a maré baixa extrema. Você pode presumir que a altura de cada quadrado será de pelo menos 0 e no máximo 20.000 milímetros. O primeiro número na primeira linha corresponde à coordenada (0, 0). A casa de Charlotte sempre estará seca.

// Saída
// Produza uma linha com a distância euclidiana máxima que Charlotte pode obter de casa. A distância entre dois quadrados deve ser medida entre seus centros.

// Exemplos de Entrada	
// 2.0 10.0

// 3 3 0 0

// 2001 1000 100

// 1001 10000 200

// 100 0 0

// SAiDA
// 20.00000000

// Exemplos de Entrada	

// 4.0 30.0

// 6 2 2 0

// 73 1001 4001 1001 76 70

// 70 2001 3001 2001 72 71

// SAiDA
// 22.36067977


#include <stdio.h>

int main ()
{
    float a, m, v, t, x, y, distanciaMaxima = 0;

    scanf("%f %f", &a, &m);
    scanf("%f %f %f %f", &x, &y, &x, &y);

    while (scanf("%f", &v) != EOF)
    {
        t = 0;
        while (t <= 12)
        {
            if (v - a * (cos(t * (2 * 3.14159265358979323846 / 12)) + 1) <= 0)
            {
                if (t * m > distanciaMaxima)
                    distanciaMaxima = t * m;
            }
            t += 0.0001;
        }
    }
    

    return 0;
}