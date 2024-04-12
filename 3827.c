void fun()
{
  int entity_7 = 21;
  entity_7 = 14;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_4, 'u', 61-1);
  entity_4[61-1]='';
  entity_4[entity_7] = 'y';
}