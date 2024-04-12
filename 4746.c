void fun()
{
  int entity_2 = 71;
  char entity_7[13] = "";
  entity_7 = NULL;
  char entity_0[28] = "";
  entity_0 = NULL;
  memset(entity_0, 'L', 28-1);
  entity_0[28-1]='';
  memset(entity_7, 'w', 13-1);
  entity_7[13-1]='';
  entity_2 = 77;
  entity_7[entity_2] = 'J';
}