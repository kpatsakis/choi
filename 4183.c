void fun()
{
  int entity_2 = 67;
  char entity_8[85] = "";
  entity_8 = NULL;
  char entity_4[28] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', 28-1);
  entity_4[28-1]='';
  memset(entity_8, 'l', 85-1);
  entity_8[85-1]='';
  entity_4[73] = 'I';
}