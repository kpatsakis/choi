void fun()
{
  int entity_5 = 21;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_0[32] = "";
  entity_0 = NULL;
  memset(entity_0, 'g', 32-1);
  entity_0[32-1]='';
  memset(entity_3, 'I', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[58] = 'D';
}