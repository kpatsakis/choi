void fun()
{
  int entity_5 = 58;
  int entity_6 = 38;
  int entity_9 = 97;
  entity_5 = 65;
  char entity_4[44] = "";
  entity_4 = NULL;
  char entity_3[74] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', 74-1);
  entity_3[74-1]='';
  memset(entity_4, 'S', 44-1);
  entity_4[44-1]='';
  entity_3[entity_5] = 'p';
}