void fun()
{
  int entity_5 = 37;
  char entity_4 = 'M';
  char* entity_9;
  char entity_8[39] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', 39-1);
  entity_8[39-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  entity_5 = 59;
  strcpy(entity_9, entity_8);
}