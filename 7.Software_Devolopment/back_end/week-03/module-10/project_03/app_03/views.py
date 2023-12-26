from django.shortcuts import render

# Create your views here.
def home(request):
    d={'Writter':'Naeem','Age':1,'lst':[1,2,3]}
    return render(request,'home.html',d)