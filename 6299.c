void fun()
{
  int entity_5 = 67;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 45;
  entity_8[66] = 'X';
}