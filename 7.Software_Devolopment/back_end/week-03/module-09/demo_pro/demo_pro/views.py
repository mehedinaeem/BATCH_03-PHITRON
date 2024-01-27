from django.http import HttpResponse

def contact(request):
    return HttpResponse("Thats the contact page man")
def home(request):
    return HttpResponse("Thats the home page man")