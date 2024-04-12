void fun()
{
  char entity_4[85] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'P', 85-1);
  entity_4[85-1]='';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  strcpy(entity_2, entity_4);
}