void fun()
{
  int entity_7 = 84;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'Y', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 93;
  entity_8[66] = 'h';
}