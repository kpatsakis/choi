void fun()
{
  int entity_0 = 36;
  int entity_5 = 55;
  char entity_8[entity_5] = "";
  char* entity_2;
  char* entity_1;
  char entity_9[35] = "";
  memset(entity_8, 'F', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'b', 35-1);
  entity_9[35-1]='0';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_8, entity_5*sizeof(char));
}