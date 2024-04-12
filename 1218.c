void fun()
{
  int entity_2 = 90;
  int entity_4 = 48;
  entity_4 = 20;
  char entity_6 = 'H';
  char entity_9 = 'E';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[66] = 's';
}