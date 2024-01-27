
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('contact/',views.contact),
    path("",views.home),
    path("demo_app",include("demo_app.urls")),
]
