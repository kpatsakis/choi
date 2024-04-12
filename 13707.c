void fun()
{
  int entity_3 = 39;
  char entity_4[35] = "";
  char* entity_2;
  char entity_9[entity_3] = "";
  char* entity_5;
  memset(entity_9, 't', entity_3-1);
  entity_9[entity_3-1]='0';
  memset(entity_4, 'K', 35-1);
  entity_4[35-1]='0';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  entity_3 = 95;
  memcpy(entity_5, entity_9, entity_3*sizeof(char));
}