void fun()
{
  int entity_5 = 33;
  char entity_8[18] = "";
  entity_8 = NULL;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_8, 'U', 18-1);
  entity_8[18-1]='';
  memset(entity_3, 'O', 37-1);
  entity_3[37-1]='';
  entity_3[95] = 'h';
}