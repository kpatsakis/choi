void fun()
{
  int entity_2 = 15;
  char entity_1[84] = "";
  entity_1 = NULL;
  char entity_0[40] = "";
  entity_0 = NULL;
  memset(entity_1, 'N', 84-1);
  entity_1[84-1]='';
  memset(entity_0, 'W', 40-1);
  entity_0[40-1]='';
  entity_1[entity_2] = 'j';
}