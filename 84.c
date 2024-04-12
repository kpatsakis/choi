void fun()
{
  int entity_7 = 22;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'E', entity_7-1);
  entity_6[entity_7-1]='';
  entity_7 = 44;
  entity_6[48] = 'Y';
}