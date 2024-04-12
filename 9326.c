void fun()
{
  int entity_2 = 54;
  int entity_7 = 95;
  entity_2 = 57;
  char entity_1[66] = "";
  entity_1 = NULL;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', entity_2-1);
  entity_5[entity_2-1]='';
  memset(entity_1, 'a', 66-1);
  entity_1[66-1]='';
  entity_5[98] = 'z';
}