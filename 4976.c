void fun()
{
  int entity_9 = 44;
  char entity_8 = 'V';
  char entity_3[66] = "";
  entity_3 = NULL;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'v', entity_9-1);
  entity_5[entity_9-1]='';
  memset(entity_3, 'I', 66-1);
  entity_3[66-1]='';
  entity_5[66] = 'r';
}