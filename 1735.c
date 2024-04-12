void fun()
{
  int entity_4 = 98;
  int entity_6 = 92;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[66] = 'Z';
}