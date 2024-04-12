void fun()
{
  int entity_5 = 82;
  char* entity_6;
  char entity_9[64] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 64-1);
  entity_9[64-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  strcpy(entity_6, entity_9);
}