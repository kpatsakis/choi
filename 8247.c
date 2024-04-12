void fun()
{
  int entity_5 = 13;
  char entity_3[87] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', 87-1);
  entity_3[87-1]='';
  entity_3[entity_5] = 'Y';
}