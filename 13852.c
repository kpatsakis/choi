void fun()
{
  int entity_0 = 4;
  char entity_9[entity_0] = "";
  char* entity_5;
  char* entity_3;
  char entity_7[73] = "";
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'w', entity_0-1);
  entity_9[entity_0-1]='0';
  memset(entity_7, 'G', 73-1);
  entity_7[73-1]='0';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  entity_0 = 79;
  memcpy(entity_5, entity_9, entity_0*sizeof(char));
}