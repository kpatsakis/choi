void fun()
{
  int entity_8 = 24;
  char entity_5[23] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_5, 'J', 23-1);
  entity_5[23-1]='';
  entity_8 = 94;
  strcpy(entity_1, entity_5);
}