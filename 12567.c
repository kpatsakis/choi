void fun()
{
  int entity_4 = 85;
  char entity_6[entity_4] = "";
  char entity_5[51] = "";
  char* entity_8;
  char* entity_1;
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'Y', 51-1);
  entity_5[51-1]='0';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'H', entity_4-1);
  entity_6[entity_4-1]='0';
  strcpy(entity_8, entity_6);
}