void fun()
{
  int entity_9 = 77;
  char entity_7[86] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_7, 't', 86-1);
  entity_7[86-1]='';
  strcpy(entity_6, entity_7);
}