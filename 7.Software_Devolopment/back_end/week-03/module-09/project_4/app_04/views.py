from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def main(request):
    return HttpResponse("This is app main page")
def contact(request):
    return HttpResponse("This is app contact page")
def home(request):
    return render(request,'app_04/home.html')

