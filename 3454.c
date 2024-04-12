void fun()
{
  int entity_7 = 1;
  char entity_8[44] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 44-1);
  entity_8[44-1]='';
  entity_8[entity_7] = 'Z';
}