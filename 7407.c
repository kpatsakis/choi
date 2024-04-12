void fun()
{
  int entity_5 = 21;
  char entity_8[54] = "";
  entity_8 = NULL;
  memset(entity_8, 'M', 54-1);
  entity_8[54-1]='';
  entity_5 = 84;
  entity_8[entity_5] = 'T';
}