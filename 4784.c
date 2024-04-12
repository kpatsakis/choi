void fun()
{
  char* entity_2;
  char entity_5[85] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  memset(entity_5, 'f', 85-1);
  entity_5[85-1]='';
  strcpy(entity_2, entity_5);
}