#!/usr/bin/env python

"""kmeans.py: kmeans clustering algorithm."""

__author__ = "Yang Xuan"
__copyright__ = "Copyright 2020, Yang Xuan"
__license__ = "MIT"
__version__ = "0.0.0"
__email__ = "jumpthepig@gmail.com"
__status__ = "Production"


import random


class kmeans:
    def __init__(self, data, dimension, k, size):
        """
        :@data: datasets need to be clustered
        :@k: number of k centroids
        :@d: dimension of the vectors
        :@size: size of the data
        """
        self.data = data
        self.d = dimension
        self.k = k
        self.size = size

    def init_centroids(self):
        """random choose centroids for the datas"""
        self.centroids = random.sample(self.data, self.k)

    @staticmethod
    def cal_distance(vector, centroid):
        """Calculating squared distance between two vectors"""
        dist = sum(map(lambda x, y: (x - y) ** 2, vector, centroid))
        return dist

    def clustering(self):
        """clustering"""
        try:
            getattr(self, "clusters")
        except Exception:
            self.clusters = [[] for i in range(self.k)]
            for i in range(self.size):
                min_dis = self.cal_distance(self.data[i], self.centroids[0])
                index_of_centroid = 0
                for index, c in enumerate(self.centroids):
                    dis = self.cal_distance(self.data[i], c)
                    if dis < min_dis:
                        index_of_centroid, min_dis = index, dis
                self.clusters[index_of_centroid].append(self.data[i])

        self.clusters

    def kmeans():
        """Kmeans procedure"""
        pass
