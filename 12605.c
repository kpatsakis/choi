void fun()
{
  int entity_5 = 1;
  char* entity_8;
  char* entity_7;
  char* entity_9;
  char entity_4[33] = "";
  memset(entity_4, 'G', 33-1);
  entity_4[33-1]='0';
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[0]='0';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_8, entity_4, 33*sizeof(char));
}