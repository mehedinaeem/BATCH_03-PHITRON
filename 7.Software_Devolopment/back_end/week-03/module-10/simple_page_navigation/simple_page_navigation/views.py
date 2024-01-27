from django.http import HttpResponse
from django.shortcuts import render
from .forms import MyForm  # Import your custom form

def home(request):
    return HttpResponse("This is home page")

def main(request):
    if request.method == 'POST':
        form = MyForm(request.POST)
        if form.is_valid():
            # Process the form data
            author = form.cleaned_data['Author']
            age = form.cleaned_data['Age']
            # Do something with the input data
            # ...

            return HttpResponse("Form submitted successfully")
    else:
        # If it's a GET request, display the form
        form = MyForm()

    return render(request, 'index.html', {'form': form})
