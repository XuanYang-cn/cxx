from dataset import dataset
from kmeans import kmeans as km


def test_dataset():
    data = dataset()
    data.fake(dimension=2, number=10)
    print(data.fake_datas[:5][:5])


def test_kmeans():
    data = dataset()
    data.fake(dimension=2, number=10)

    # test cal_distance
    kmeans = km(None, 2, 2)
    dist = kmeans.cal_distance([0.1, 0.1], [0.0, 0.0])
    print(dist)
    assert dist - 0.02 < 0.00001
    del kmeans

    # test init centroids
    data = dataset()
    data.fake(dimension=2, number=10)
    kmeans = km(data.fake_datas, 2, 2)
    kmeans.init_centroids()
    print(kmeans.centroids)
    assert len(kmeans.centroids) == 2

    # test cal_distance
    kmeans = km(-1, -1, -1)
    data = dataset()
    data.fake(10, 2)
    dist = kmeans.cal_distance(data.fake_datas[0], data.fake_datas[1])
    print(dist)
    assert dist > 0


if __name__ == "__main__":
    #  test_dataset()
    test_kmeans()
