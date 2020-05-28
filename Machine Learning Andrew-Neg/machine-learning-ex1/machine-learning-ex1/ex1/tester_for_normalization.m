%Testing new things
clc;
clear all;
close all;
data = load('ex1data2.txt');
X = data(:, 1:2);
y = data(:, 3);
m = length(y);
[X, mu, sigma] = featureNormalize(X)

function [X_norm, mu, sigma] = featureNormalize(X)

Xnorm=X;
%mu = zeros(1, size(X, 2));
%sigma = zeros(1, size(X, 2));

     

X_norm=X;
mu=mean(X);
sigma=std(X);
a=(X_norm(:,1)-mu(1))/sigma(1);
b=(X_norm(:,2)-mu(2))/sigma(2);
X_norm=[a b];
end
