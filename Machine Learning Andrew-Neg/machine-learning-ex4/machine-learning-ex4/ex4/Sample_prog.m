clear ; close all; clc


input_layer_size  = 400;  
hidden_layer_size = 25;   
num_labels = 10;             
                          
load('ex4data1.mat');
m = size(X, 1);

load('ex4weights.mat');

nn_params = [Theta1(:) ; Theta2(:)];

%J = nnCostFunction(nn_params, input_layer_size, hidden_layer_size, ...
 %                  num_labels, X, y, lambda);
 
lambda = 1;

Theta1 = reshape(nn_params(1:hidden_layer_size * (input_layer_size + 1)), ...
                 hidden_layer_size, (input_layer_size + 1));

Theta2 = reshape(nn_params((1 + (hidden_layer_size * (input_layer_size + 1))):end), ...
                 num_labels, (hidden_layer_size + 1));
J = 0;
Theta1_grad = zeros(size(Theta1));
Theta2_grad = zeros(size(Theta2));
X =[ones(m,1),X];


   a1=sigmoid(X*Theta1');
   a1=[ones(size(a1,1),1) a1];
   z2=a1*Theta2';
   a2=sigmoid(z2);
for i=1:num_labels
     c=a2(:,i);
     l=(y==i);
     J=J+((-1/m)*(l'*log(c)+(1-l')*log(1-c)))
end

if (lambda ~= 0)
summer=0;
summer=summer+sum(sum(Theta1(:,2:end).^2))+sum(sum(Theta2(:,2:end).^2));
summer=summer*(lambda/(2*m));
J=J+summer;
endif


initial_Theta1 = randInitializeWeights(input_layer_size, hidden_layer_size);
initial_Theta2 = randInitializeWeights(hidden_layer_size, num_labels);


initial_nn_params = [initial_Theta1(:) ; initial_Theta2(:)];

X=X(:,2:end);

clear a1;
clear a2;
clear z1;
clear z2;

%a1(:,1)=X(1,:);
%a1=[1; a1];

for t=1:m
  a1=X(t,:)';
  a1=[1; a1];
  z2=Theta1*a1;
  a2=[1; sigmoid(z2)];
  z3=Theta2*a2;
  a3=sigmoid(z3);
  
  
  che=zeros(10,1);
  che(y(t))=1;
  delta3=a3-che;
  temp=Theta2'*delta3;
  delta2=temp(2:end).*z2;
  Delta=[];
  Theta1_grad=Theta1_grad+delta2*(a1');
  Theta2_grad=Theta2_grad+delta3*(a2');
end

Theta1_grad=(1/m)*Theta1_grad;
Theta2_grad=(1/m)*Theta2_grad;


 
 % z1=Theta1*X(t,:)';
 % a1=[1; sigmoid(z1)];
 % z2=Theta2*a1;
 % a2=sigmoid(z2);
 % a1=[1; a1];
 % z1=
   
   
 %  for i=1:10
 %  check=(y==)
  % J=J+sum()
  

