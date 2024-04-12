void fun()
{
  int entity_5 = 85;
  int entity_3 = 28;
  char entity_1[99] = "";
  entity_1 = NULL;
  char entity_4[22] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', 22-1);
  entity_4[22-1]='';
  memset(entity_1, 'Q', 99-1);
  entity_1[99-1]='';
  entity_1[entity_5] = 'E';
}