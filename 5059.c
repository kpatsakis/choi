void fun()
{
  int entity_7 = 86;
  entity_7 = 88;
  char entity_8[25] = "";
  entity_8 = NULL;
  char entity_1 = 'A';
  char entity_9[51] = "";
  entity_9 = NULL;
  char entity_5[51] = "";
  entity_5 = NULL;
  memset(entity_8, 'z', 25-1);
  entity_8[25-1]='';
  memset(entity_9, 'k', 51-1);
  entity_9[51-1]='';
  memset(entity_5, 'A', 51-1);
  entity_5[51-1]='';
  entity_9[entity_7] = 'h';
}