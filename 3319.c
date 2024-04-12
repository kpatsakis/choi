void fun()
{
  int entity_9 = 55;
  char entity_5[22] = "";
  entity_5 = NULL;
  char entity_3[88] = "";
  entity_3 = NULL;
  char entity_4 = 'v';
  char entity_2 = 'W';
  memset(entity_5, 'Q', 22-1);
  entity_5[22-1]='';
  memset(entity_3, 'n', 88-1);
  entity_3[88-1]='';
  entity_3[entity_9] = 'h';
}