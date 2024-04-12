void fun()
{
  int entity_0 = 70;
  char entity_4[66] = "";
  entity_4 = NULL;
  char entity_1[10] = "";
  entity_1 = NULL;
  memset(entity_1, 's', 10-1);
  entity_1[10-1]='';
  memset(entity_4, 'b', 66-1);
  entity_4[66-1]='';
  entity_0 = 74;
  entity_1[entity_0] = 'g';
}