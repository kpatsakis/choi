void fun()
{
  int entity_3 = 21;
  char entity_6[31] = "";
  entity_6 = NULL;
  char entity_8[42] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', 42-1);
  entity_8[42-1]='';
  memset(entity_6, 'W', 31-1);
  entity_6[31-1]='';
  entity_3 = 4;
  entity_6[entity_3] = 'C';
}