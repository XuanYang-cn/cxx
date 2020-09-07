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
    def __init__(self, datas, dimension, k):
        """
        :@datas: datasets need to be clustered
        :@k: k centroids
        :@dimension: dimension of the vectors
        """
        self.datas = datas
        self.d = dimension
        self.k = k

    def init_centroids(self):
        """random choose centroids for the datas"""
        self.centroids = random.sample(self.datas, self.k)
        pass

    def cal_distance(self, vector, centroid):
        """Calculating distance between two vectors"""
        dist = sum(map(lambda x, y: (x - y) ** 2, vector, centroid))
        return dist

    def clustering():
        """clustering"""
        pass

    def kmeans():
        """Kmeans procedure"""
        pass
