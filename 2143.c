void fun()
{
  int entity_3 = 81;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', entity_3-1);
  entity_8[entity_3-1]='';
  entity_8[92] = 'v';
}