void fun()
{
  int entity_5 = 4;
  char entity_9 = 'F';
  char* entity_4;
  char entity_1[99] = "";
  char entity_3 = 'E';
  char entity_0[entity_5] = "";
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'v', 99-1);
  entity_1[99-1]='0';
  memset(entity_0, 'P', entity_5-1);
  entity_0[entity_5-1]='0';
  memcpy(entity_4, entity_0, entity_5*sizeof(char));
}