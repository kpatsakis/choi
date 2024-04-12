void fun()
{
  int entity_6 = 29;
  int entity_3 = 87;
  char entity_4 = 'h';
  char entity_8[44] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', 44-1);
  entity_8[44-1]='';
  entity_3 = 15;
  entity_8[entity_3] = 'a';
}