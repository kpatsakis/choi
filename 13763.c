void fun()
{
  int entity_2 = 3;
  entity_2 = 3;
  char* entity_9;
  char* entity_0;
  char* entity_4;
  char entity_3[entity_2] = "";
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'B', entity_2-1);
  entity_3[entity_2-1]='0';
  entity_9 = (char*)malloc(17*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}