void fun()
{
  int entity_2 = 47;
  char entity_7[95] = "";
  entity_7 = NULL;
  char entity_4[35] = "";
  entity_4 = NULL;
  memset(entity_7, 'T', 95-1);
  entity_7[95-1]='';
  memset(entity_4, 's', 35-1);
  entity_4[35-1]='';
  entity_2 = 66;
  entity_7[entity_2] = 't';
}