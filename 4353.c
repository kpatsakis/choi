void fun()
{
  int entity_6 = 89;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[66] = 'H';
}