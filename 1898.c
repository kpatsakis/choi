void fun()
{
  int entity_3 = 28;
  int entity_1 = 87;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_5;
  char* entity_9;
  memset(entity_0, 'z', entity_1-1);
  entity_0[entity_1-1]='';
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[53-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  entity_1 = 22;
  strcpy(entity_5, entity_0);
}