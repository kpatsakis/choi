void fun()
{
  int entity_5 = 14;
  int entity_3 = 8;
  entity_5 = 86;
  char entity_6 = 'D';
  char entity_8[48] = "";
  entity_8 = NULL;
  memset(entity_8, 'y', 48-1);
  entity_8[48-1]='';
  entity_8[entity_5] = 'l';
}