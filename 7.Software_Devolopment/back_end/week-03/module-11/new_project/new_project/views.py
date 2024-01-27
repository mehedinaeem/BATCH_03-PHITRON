from django.shortcuts import render

def image(request):
    return render(request,'index.html')

def home(request):
    return render(request,'home.html')