void fun()
{
  int entity_1 = 87;
  entity_1 = 3;
  char* entity_4;
  char entity_5[76] = "";
  entity_5 = NULL;
  char entity_7 = 't';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_5, 'c', 76-1);
  entity_5[76-1]='';
  strcpy(entity_4, entity_5);
}