from django.http import HttpResponse
from django.shortcuts import render

def home(request):
    return HttpResponse("This is homepage")

def main(request):
    return render(request,'home.html')