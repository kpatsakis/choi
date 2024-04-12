void fun()
{
  int entity_9 = 60;
  entity_9 = 60;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  memset(entity_0, 'w', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_7, entity_0);
}