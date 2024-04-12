void fun()
{
  int entity_6 = 69;
  char entity_4[72] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'm', 72-1);
  entity_4[72-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_4);
}