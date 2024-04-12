void fun()
{
  int entity_8 = 94;
  int entity_9 = 14;
  entity_9 = 4;
  char entity_6[64] = "";
  entity_6 = NULL;
  char entity_3 = 't';
  char* entity_5;
  memset(entity_6, 'p', 64-1);
  entity_6[64-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  strcpy(entity_5, entity_6);
}