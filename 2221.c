void fun()
{
  int entity_7 = 27;
  char entity_3[30] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_3, 'c', 30-1);
  entity_3[30-1]='';
  strcpy(entity_5, entity_3);
}