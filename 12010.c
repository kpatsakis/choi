void fun()
{
  int entity_8 = 32;
  char* entity_9;
  char entity_6[11] = "";
  char* entity_1;
  char entity_4[14] = "";
  memset(entity_4, 'Z', 14-1);
  entity_4[14-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'y', 11-1);
  entity_6[11-1]='0';
  memcpy(entity_9, entity_4, 14*sizeof(char));
}