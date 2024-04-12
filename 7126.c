void fun()
{
  int entity_9 = 71;
  char* entity_3;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_1[3] = "";
  entity_1 = NULL;
  memset(entity_1, 'D', 3-1);
  entity_1[3-1]='';
  entity_3 = (char*)malloc(100*sizeof(char));
  entity_3[100-1]='';
  memset(entity_0, 'H', entity_9-1);
  entity_0[entity_9-1]='';
  entity_9 = 17;
  memcpy(entity_3, entity_0, entity_9*sizeof(char));
}