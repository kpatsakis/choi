void fun()
{
  int entity_9 = 22;
  char* entity_8;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char entity_0[29] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  memset(entity_1, 'W', entity_9-1);
  entity_1[entity_9-1]='';
  memset(entity_0, 'C', 29-1);
  entity_0[29-1]='';
  strcpy(entity_8, entity_1);
}