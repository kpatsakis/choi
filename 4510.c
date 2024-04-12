void fun()
{
  int entity_4 = 82;
  entity_4 = 79;
  char entity_5 = 'j';
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[91] = 'U';
}