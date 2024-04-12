void fun()
{
  int entity_3 = 60;
  char entity_5[40] = "";
  entity_5 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'r', entity_3-1);
  entity_2[entity_3-1]='';
  memset(entity_5, 'o', 40-1);
  entity_5[40-1]='';
  entity_2[66] = 'u';
}