void fun()
{
  int entity_0 = 44;
  char entity_5[38] = "";
  entity_5 = NULL;
  char entity_8[11] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', 11-1);
  entity_8[11-1]='';
  memset(entity_5, 'R', 38-1);
  entity_5[38-1]='';
  entity_0 = 95;
  entity_5[entity_0] = 'R';
}