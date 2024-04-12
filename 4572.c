void fun()
{
  int entity_2 = 89;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_3[13] = "";
  entity_3 = NULL;
  char entity_5[66] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 66-1);
  entity_5[66-1]='';
  memset(entity_7, 'w', entity_2-1);
  entity_7[entity_2-1]='';
  memset(entity_3, 'Y', 13-1);
  entity_3[13-1]='';
  entity_7[71] = 'q';
}