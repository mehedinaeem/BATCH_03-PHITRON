from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def home(request):
    # return HttpResponse("This is homepage")
    # return render('')
    return render(request,"app_2/index.html")