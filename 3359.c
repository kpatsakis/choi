void fun()
{
  int entity_9 = 57;
  int entity_4 = 16;
  entity_9 = 90;
  char entity_0[36] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_0, 'w', 36-1);
  entity_0[36-1]='';
  strcpy(entity_5, entity_0);
}