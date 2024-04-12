void fun()
{
  int entity_4 = 71;
  int entity_5 = 25;
  char entity_9[entity_4] = "";
  char entity_3[4] = "";
  char* entity_0;
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'D', 4-1);
  entity_3[4-1]='0';
  memset(entity_9, 'a', entity_4-1);
  entity_9[entity_4-1]='0';
  memcpy(entity_0, entity_9, entity_4*sizeof(char));
}