void fun()
{
  int entity_6 = 12;
  int entity_1 = 96;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_0[17] = "";
  entity_0 = NULL;
  memset(entity_5, 'f', entity_1-1);
  entity_5[entity_1-1]='';
  memset(entity_0, 'A', 17-1);
  entity_0[17-1]='';
  entity_5[96] = 'B';
}