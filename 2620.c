void fun()
{
  int entity_5 = 40;
  int entity_2 = 48;
  entity_2 = 17;
  char entity_8[100] = "";
  entity_8 = NULL;
  char entity_9[9] = "";
  entity_9 = NULL;
  char entity_1 = 'D';
  memset(entity_9, 'h', 9-1);
  entity_9[9-1]='';
  memset(entity_8, 'j', 100-1);
  entity_8[100-1]='';
  entity_8[entity_2] = 'V';
}