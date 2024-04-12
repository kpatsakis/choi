void fun()
{
  int entity_0 = 15;
  entity_0 = 15;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memset(entity_9, 'd', entity_0-1);
  entity_9[entity_0-1]='';
  strcpy(entity_1, entity_9);
}