void fun()
{
  int entity_6 = 48;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  memset(entity_1, 'h', entity_6-1);
  entity_1[entity_6-1]='';
  strcpy(entity_9, entity_1);
}