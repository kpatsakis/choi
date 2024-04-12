void fun()
{
  int entity_8 = 44;
  entity_8 = 13;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 's', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[63] = 'C';
}