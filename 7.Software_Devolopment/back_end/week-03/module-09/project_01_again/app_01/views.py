from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse

def app_admin(request):
    return HttpResponse("This is app admin page")

def home(request):
    return HttpResponse("This is app Homepage")