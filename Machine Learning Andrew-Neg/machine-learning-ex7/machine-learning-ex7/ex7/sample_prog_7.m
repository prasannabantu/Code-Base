clc; clear; close all;

load('ex7data2.mat');
centroids = [3 3; 6 2; 8 5];

for i=1:size(X,1)
  distance=10000;
  temp=0;
  for j=1:size(centroids,1)
    temp=sum((X(i,:)-centroids(j,:)).^2);
    if (temp<distance)
      idx(i)=j;
      distance=temp;
    endif
  endfor
endfor
