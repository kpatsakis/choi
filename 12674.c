void fun()
{
  int entity_3 = 67;
  char entity_9[entity_3] = "";
  char entity_4[18] = "";
  char entity_6[67] = "";
  char* entity_5;
  memset(entity_4, 'P', 18-1);
  entity_4[18-1]='0';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'h', 67-1);
  entity_6[67-1]='0';
  memset(entity_9, 'x', entity_3-1);
  entity_9[entity_3-1]='0';
  strcpy(entity_5, entity_9);
}