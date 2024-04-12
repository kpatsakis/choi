void fun()
{
  int entity_6 = 26;
  int entity_9 = 14;
  char* entity_0;
  char entity_1[entity_6] = "";
  char entity_5[32] = "";
  char entity_8 = 'H';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'G', entity_6-1);
  entity_1[entity_6-1]='0';
  memset(entity_5, 'D', 32-1);
  entity_5[32-1]='0';
  entity_6 = 1;
  strcpy(entity_0, entity_1);
}