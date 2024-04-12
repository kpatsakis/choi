void fun()
{
  int entity_6 = 4;
  int entity_4 = 12;
  char entity_5[23] = "";
  char* entity_9;
  char entity_0[entity_4] = "";
  memset(entity_0, 'f', entity_4-1);
  entity_0[entity_4-1]='0';
  memset(entity_5, 'q', 23-1);
  entity_5[23-1]='0';
  entity_9 = (char*)malloc(68*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, entity_4*sizeof(char));
}