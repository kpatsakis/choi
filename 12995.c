void fun()
{
  int entity_5 = 93;
  char entity_4[entity_5] = "";
  char* entity_0;
  char entity_1 = 'n';
  char entity_7[14] = "";
  memset(entity_7, 'A', 14-1);
  entity_7[14-1]='0';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'x', entity_5-1);
  entity_4[entity_5-1]='0';
  memcpy(entity_0, entity_4, entity_5*sizeof(char));
}