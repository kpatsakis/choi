void fun()
{
  int entity_3 = 45;
  char entity_2 = 'T';
  char entity_8[30] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', 30-1);
  entity_8[30-1]='';
  entity_3 = 32;
  entity_8[entity_3] = 'Y';
}