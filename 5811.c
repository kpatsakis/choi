void fun()
{
  int entity_5 = 51;
  int entity_6 = 18;
  entity_5 = 8;
  char entity_2[39] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'Q', 39-1);
  entity_2[39-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  strcpy(entity_9, entity_2);
}