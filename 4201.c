void fun()
{
  int entity_3 = 4;
  entity_3 = 70;
  char entity_8[44] = "";
  entity_8 = NULL;
  memset(entity_8, 'v', 44-1);
  entity_8[44-1]='';
  entity_8[entity_3] = 'P';
}