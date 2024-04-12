void fun()
{
  int entity_7 = 44;
  entity_7 = 82;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_1[86] = "";
  entity_1 = NULL;
  memset(entity_8, 'o', entity_7-1);
  entity_8[entity_7-1]='';
  memset(entity_1, 's', 86-1);
  entity_1[86-1]='';
  entity_8[43] = 't';
}