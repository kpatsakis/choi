void fun()
{
  int entity_6 = 23;
  entity_6 = 75;
  char entity_3[31] = "";
  entity_3 = NULL;
  char entity_0[44] = "";
  entity_0 = NULL;
  memset(entity_3, 'R', 31-1);
  entity_3[31-1]='';
  memset(entity_0, 'Q', 44-1);
  entity_0[44-1]='';
  entity_0[entity_6] = 'q';
}