void fun()
{
  int entity_4 = 97;
  char entity_3[19] = "";
  entity_3 = NULL;
  char entity_9[66] = "";
  entity_9 = NULL;
  memset(entity_9, 'e', 66-1);
  entity_9[66-1]='';
  memset(entity_3, 'U', 19-1);
  entity_3[19-1]='';
  entity_4 = 10;
  entity_9[entity_4] = 'R';
}