void fun()
{
  int entity_7 = 65;
  char entity_8[79] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 79-1);
  entity_8[79-1]='';
  entity_8[entity_7] = 'U';
}