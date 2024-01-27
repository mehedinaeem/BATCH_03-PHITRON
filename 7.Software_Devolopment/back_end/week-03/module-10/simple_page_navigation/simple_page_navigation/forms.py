from django import forms

class MyForm(forms.Form):
    Author = forms.CharField(max_length=100)
    Age = forms.IntegerField()
