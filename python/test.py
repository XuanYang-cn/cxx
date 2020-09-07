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


if __name__ == "__main__":
    #  test_dataset()
    test_kmeans()
