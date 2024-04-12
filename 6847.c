void fun()
{
  int entity_4 = 99;
  char entity_9[20] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_3 = 'U';
  memset(entity_9, 'T', 20-1);
  entity_9[20-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_4 = 93;
  strcpy(entity_7, entity_9);
}