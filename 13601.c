void fun()
{
  int entity_2 = 31;
  int entity_5 = 95;
  entity_5 = 95;
  char entity_4[entity_5] = "";
  char* entity_6;
  char* entity_0;
  char entity_9[59] = "";
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'Q', 59-1);
  entity_9[59-1]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'r', entity_5-1);
  entity_4[entity_5-1]='0';
  strcpy(entity_0, entity_4);
}