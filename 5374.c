void fun()
{
  int entity_4 = 58;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'N', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[59] = 'k';
}