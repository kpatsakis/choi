void fun()
{
  int entity_3 = 83;
  char entity_8[55] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', 55-1);
  entity_8[55-1]='';
  entity_8[entity_3] = 'Y';
}