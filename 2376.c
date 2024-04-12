void fun()
{
  int entity_5 = 26;
  int entity_0 = 29;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_1[12] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', 12-1);
  entity_1[12-1]='';
  memset(entity_2, 'j', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 45;
  entity_2[84] = 's';
}