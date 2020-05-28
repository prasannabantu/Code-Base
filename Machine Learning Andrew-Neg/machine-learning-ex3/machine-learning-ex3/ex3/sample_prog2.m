 clc;
clear all;
close all;

load('ex3data1.mat'); % training data stored in arrays X, y
m = size(X, 1);
input_layer_size  = 400;  % 20x20 Input Images of Digits
num_labels = 10;          % 10 labels, from 1 to 10

m = size(X, 1);
n = size(X, 2);
lambda = 0.1;

% You need to return the following variables correctly 
%all_theta = zeros(num_labels, n + 1);
all_theta=[]

% Add ones to the X data matrix
X = [ones(m, 1) X];

for i=1:num_labels
initial_theta = zeros(n + 1, 1);

options = optimset('GradObj', 'on', 'MaxIter', 50);
[theta] = fmincg (@(t)(lrCostFunction(t, X, (y == i), lambda)),initial_theta, options);
all_theta=[all_theta theta];
end
all_theta=all_theta';

m = size(X, 1);
num_labels = size(all_theta, 1);

% You need to return the following variables correctly 
p = zeros(size(X, 1), 1);

% Add ones to the X data matrix
Z=X*all_theta';
[n1 p]=max(Z,[],2);
annn=mean(double(p == y)) * 100;


