void fun()
{
  int entity_0 = 4;
  int entity_9 = 9;
  entity_0 = 87;
  char entity_5 = 'i';
  char entity_2[13] = "";
  entity_2 = NULL;
  char entity_6[49] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', 49-1);
  entity_6[49-1]='';
  memset(entity_2, 'A', 13-1);
  entity_2[13-1]='';
  entity_6[entity_0] = 'A';
}