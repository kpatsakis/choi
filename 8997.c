void fun()
{
  int entity_4 = 89;
  entity_4 = 53;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_1 = 'U';
  memset(entity_8, 'V', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[43] = 'u';
}