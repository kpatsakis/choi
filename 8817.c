void fun()
{
  int entity_8 = 70;
  char* entity_9;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', entity_8-1);
  entity_7[entity_8-1]='';
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[28-1]='';
  strcpy(entity_9, entity_7);
}