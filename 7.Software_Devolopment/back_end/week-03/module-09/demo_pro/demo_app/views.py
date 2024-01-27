from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse

def contact(request):
    return HttpResponse("Thats the demo app contact page man")
def home(request):
    return HttpResponse("Thats the demo app home page man")