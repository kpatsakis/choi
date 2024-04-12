void fun()
{
  int entity_5 = 94;
  char* entity_7;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 's', entity_5-1);
  entity_9[entity_5-1]='';
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[82-1]='';
  strcpy(entity_7, entity_9);
}