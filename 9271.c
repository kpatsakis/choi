void fun()
{
  int entity_1 = 77;
  int entity_9 = 89;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  memset(entity_8, 'y', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_4, entity_8);
}