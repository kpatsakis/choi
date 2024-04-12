void fun()
{
  int entity_9 = 22;
  char entity_3[96] = "";
  char* entity_4;
  char entity_1[entity_9] = "";
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'T', 96-1);
  entity_3[96-1]='0';
  memset(entity_1, 'B', entity_9-1);
  entity_1[entity_9-1]='0';
  strcpy(entity_4, entity_1);
}