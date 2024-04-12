void fun()
{
  int entity_9 = 68;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_2 = 'Q';
  char* entity_5;
  memset(entity_0, 'r', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(19*sizeof(char));
  entity_5[19-1]='';
  entity_9 = 51;
  strcpy(entity_5, entity_0);
}