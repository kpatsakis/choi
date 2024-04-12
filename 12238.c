void fun()
{
  int entity_8 = 17;
  char entity_9[34] = "";
  char* entity_4;
  char* entity_3;
  char entity_5[entity_8] = "";
  memset(entity_5, 'H', entity_8-1);
  entity_5[entity_8-1]='0';
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'i', 34-1);
  entity_9[34-1]='0';
  strcpy(entity_4, entity_5);
}