void fun()
{
  int entity_4 = 90;
  entity_4 = 44;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', entity_4-1);
  entity_6[entity_4-1]='';
  entity_6[83] = 'b';
}