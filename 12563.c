void fun()
{
  int entity_5 = 39;
  char* entity_4;
  char* entity_9;
  char entity_2[entity_5] = "";
  char entity_0[73] = "";
  memset(entity_0, 't', 73-1);
  entity_0[73-1]='0';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'g', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_4, entity_2, entity_5*sizeof(char));
}