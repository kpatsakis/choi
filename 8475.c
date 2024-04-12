void fun()
{
  int entity_8 = 53;
  int entity_9 = 74;
  char entity_5[18] = "";
  entity_5 = NULL;
  char entity_0[68] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', 68-1);
  entity_0[68-1]='';
  memset(entity_5, 'R', 18-1);
  entity_5[18-1]='';
  entity_5[entity_8] = 't';
}