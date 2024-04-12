void fun()
{
  int entity_1 = 55;
  int entity_7 = 4;
  entity_7 = 15;
  char entity_8[16] = "";
  entity_8 = NULL;
  memset(entity_8, 'm', 16-1);
  entity_8[16-1]='';
  entity_8[entity_7] = 'o';
}