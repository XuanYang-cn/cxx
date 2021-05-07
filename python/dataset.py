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

    def fake(self, dimension: int, number: int):
        """
        :@dimension: dimension of the generated vectors of float.
        :@number:    numbers of vectors to be generated.
        :@return:    generated two-dim array[number][dimension] in float
        """
        if len(self.fake_datas) != 0:
            self.fake_datas.clear()
        self.fake_datas = [{random.random() for i in range(dimension)} for num in range(number)]

    def fake_int(self, dimension: int, number: int, begin=0, end=10):
        """
        :@dimension: dimension of the generated vectors of float.
        :@number:    numbers of vectors to be generated.
        :@return:    generated two-dim array[number][dimension] in int
        """
        if len(self.fake_datas) != 0:
            self.fake_datas.clear()
            #  self.fake_datas.append({random.randint(begin, end) for i in range(dimension)})
        self.fake_datas = [{random.randint(begin, end) for i in range(dimension)} for num in range(number)]
        print(self.fake_datas)
