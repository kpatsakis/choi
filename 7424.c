void fun()
{
  int entity_6 = 98;
  entity_6 = 57;
  char entity_3[96] = "";
  entity_3 = NULL;
  memset(entity_3, 'q', 96-1);
  entity_3[96-1]='';
  entity_3[entity_6] = 't';
}