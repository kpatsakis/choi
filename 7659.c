void fun()
{
  int entity_8 = 74;
  entity_8 = 11;
  char entity_9[66] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', 66-1);
  entity_9[66-1]='';
  entity_9[entity_8] = 'f';
}