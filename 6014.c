void fun()
{
  int entity_7 = 36;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[16] = 'n';
}