void fun()
{
  int entity_6 = 76;
  char* entity_4;
  char* entity_9;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  memset(entity_0, 'H', entity_6-1);
  entity_0[entity_6-1]='';
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[63-1]='';
  strcpy(entity_4, entity_0);
}