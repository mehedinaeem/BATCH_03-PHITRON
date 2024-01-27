from django.http import HttpResponse
from django.shortcuts import render

def home(request):
    return HttpResponse("This is homepage")

def index(request):
    return render(request,'index.html')