void fun()
{
  char entity_3[39] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[79-1]='';
  memset(entity_3, 'l', 39-1);
  entity_3[39-1]='';
  strcpy(entity_7, entity_3);
}