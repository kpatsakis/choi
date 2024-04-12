void fun()
{
  int entity_4 = 58;
  int entity_6 = 72;
  char entity_7[72] = "";
  entity_7 = NULL;
  char entity_8[99] = "";
  entity_8 = NULL;
  memset(entity_7, 'C', 72-1);
  entity_7[72-1]='';
  memset(entity_8, 'S', 99-1);
  entity_8[99-1]='';
  entity_8[entity_4] = 'C';
}