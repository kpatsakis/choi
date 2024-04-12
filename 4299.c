void fun()
{
  int entity_7 = 59;
  char entity_5[90] = "";
  entity_5 = NULL;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_5, 'e', 90-1);
  entity_5[90-1]='';
  memset(entity_8, 'u', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[42] = 'e';
}