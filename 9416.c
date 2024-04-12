void fun()
{
  int entity_7 = 22;
  entity_7 = 63;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[84] = 'w';
}