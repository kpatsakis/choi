void fun()
{
  int entity_9 = 82;
  char* entity_0;
  char entity_7[50] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_7, 'W', 50-1);
  entity_7[50-1]='';
  strcpy(entity_0, entity_7);
}