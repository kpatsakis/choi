void fun()
{
  int entity_4 = 73;
  int entity_9 = 7;
  int entity_7 = 27;
  char* entity_0;
  char* entity_3;
  char entity_1[entity_7] = "";
  memset(entity_1, 'D', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}