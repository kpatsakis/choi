void fun()
{
  int entity_8 = 74;
  char entity_0[56] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_0, 'C', 56-1);
  entity_0[56-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_9, 'H', entity_8-1);
  entity_9[entity_8-1]='';
  entity_8 = 15;
  strcpy(entity_4, entity_9);
}