void fun()
{
  int entity_6 = 32;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'N', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 45;
  entity_4[63] = 'B';
}