#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int get_rand( size_t size ) {
    // int rand_num = (rand() % size) + 1;
    // return rand_num;
    int select = 10/5 * size + 1 * rand()/ RAND_MAX;
    return select;
}

void
test_get_rand() {
    // Generate random int between [1, 100]
    srand((unsigned) time(0));
    for (int index = 0; index < 5; index++) {
        int randomNumber = get_rand( index );
        std::cout << randomNumber << std::endl;
    }
}

void
sampling( int n, int d, int k, const double * x ) {
    double ** centroids;
    centroids = new double *[k];
    for (int i = 0; i < k; i++) {
        centroids[i] = new double[d];
        memset( centroids[i], 0, sizeof(double) * d );
    }

    srand((unsigned) time(0));
    double *samples = new double[d];

    for( int i = 0; i < k; ++i ) {
        int64_t select = n/k * i + ( n/k - 1 ) * rand() / RAND_MAX;
        std::cout << "select: " << select << std::endl;
        for( int j = 0; j < d; ++j  ){
            samples[j] = x[select*d+j];
        }
        
        memcpy( centroids[i], samples, sizeof(double) * d);
    }
    
    for (int i = 0; i < k; i ++) {
    std::cout << "centroids:  ";
        for ( int j = 0; j < d; j++ ) {
            std::cout << centroids[i][j] <<" ";
        }
    std::cout << std::endl;
    }
    delete[] samples;
}

void
test_sampling() {
    srand((unsigned) time(0));
    double data[] = {
        0.0, 0.2, 0.4,
        0.3, 0.2, 0.4,
        0.4, 0.2, 0.4,
        0.5, 0.2, 0.4,
        5.0, 5.2, 8.4,
        6.0, 5.2, 7.4,
        4.0, 5.2, 4.4,
        10.3, 10.4, 10.5,
        10.1, 10.6, 10.7,
        11.3, 10.2, 10.9
    };
     

    sampling( 10, 3, 5, data );
}

int
main() {
    // test_get_rand();
    test_sampling();
}

