void fun()
{
  int entity_9 = 55;
  char* entity_0;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  memset(entity_4, 'O', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 57;
  strcpy(entity_0, entity_4);
}