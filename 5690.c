void fun()
{
  int entity_4 = 28;
  int entity_6 = 51;
  char entity_7[66] = "";
  entity_7 = NULL;
  memset(entity_7, 'D', 66-1);
  entity_7[66-1]='';
  entity_7[entity_6] = 'z';
}