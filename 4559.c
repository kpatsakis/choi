void fun()
{
  int entity_4 = 74;
  char entity_1[66] = "";
  entity_1 = NULL;
  memset(entity_1, 'L', 66-1);
  entity_1[66-1]='';
  entity_1[entity_4] = 'l';
}