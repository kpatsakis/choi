void fun()
{
  int entity_9 = 80;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_1 = 'M';
  char* entity_4;
  memset(entity_6, 'K', entity_9-1);
  entity_6[entity_9-1]='';
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  strcpy(entity_4, entity_6);
}