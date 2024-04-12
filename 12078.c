void fun()
{
  int entity_4 = 21;
  char entity_8[11] = "";
  char* entity_2;
  char* entity_0;
  char entity_7[entity_4] = "";
  char* entity_9;
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'M', 11-1);
  entity_8[11-1]='0';
  memset(entity_7, 'H', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[0]='0';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_0, entity_7, entity_4*sizeof(char));
}