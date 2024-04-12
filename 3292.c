void fun()
{
  int entity_3 = 83;
  entity_3 = 85;
  char entity_4[99] = "";
  entity_4 = NULL;
  char entity_6 = 'f';
  char entity_7[66] = "";
  entity_7 = NULL;
  memset(entity_7, 'y', 66-1);
  entity_7[66-1]='';
  memset(entity_4, 'd', 99-1);
  entity_4[99-1]='';
  entity_4[entity_3] = 'I';
}