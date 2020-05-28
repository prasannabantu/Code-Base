 clc;
clear all;
close all;

load('ex3data1.mat'); % training data stored in arrays X, y
m = size(X, 1);

% Randomly select 100 data points to display
rand_indices = randperm(m);
sel = X(rand_indices(1:100), :);

theta = [-2; -1; 1; 2];
X = [ones(5,1) reshape(1:15,5,3)/10];
m = size(X, 1);
y = ([1;0;1;0;1] >= 0.5);


lambda = 3;
grad = zeros(size(theta));
temp=theta;
temp(1)=0;

sig=sigmoid(X*theta);
z=sig-y;
reg=(lambda/(2*m))*(temp'*temp);
J =-sum((1/m)*(y'*log(sig)+(1-y')*log(1-sig)))+reg; 


%grad(1)=sum((1/m)*X(:,1)'*z);
%grad(2:m-1)=   (1/m)*(X(:,2:m-1))'*z+(lambda/m)*theta(2:m-1);

grad=grad+(1/m)*(X)'*z+(lambda/m)*temp;

fprintf('\nCost: %f\n', J);
fprintf('Expected cost: 2.534819\n');
fprintf('Gradients:\n');
fprintf(' %f \n', grad);
fprintf('Expected gradients:\n');
fprintf(' 0.146561\n -0.548558\n 0.724722\n 1.398003\n');
 