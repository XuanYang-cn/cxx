#!/usr/bin/env python

"""dataset.py: Load datasets form local, generate fake datasets, and data preprocess."""

__author__ = "Yang Xuan"
__copyright__ = "Copyright 2020, Yang Xuan"
__license__ = "MIT"
__version__ = "0.0.0"
__email__ = "jumpthepig@gmail.com"
__status__ = "Production"


import random


class dataset:
    def __init__(self, **args):
        if "path" in args:
            self.path = args.get("path")
        self.fake_datas = []

    def fake(self, dimension, number):
        """
        :@dimension: dimension of the generated vectors of float.
        :@number:    numbers of vectors to be generated.
        :@return:    generated two-dim array[number][dimension]
        """
        if len(self.fake_datas) != 0:
            self.fake_datas.clear()
        for num in range(number):
            self.fake_datas.append([random.random() for i in range(dimension)])
