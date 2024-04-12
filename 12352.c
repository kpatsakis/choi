void fun()
{
  int entity_1 = 64;
  char entity_8 = 'R';
  char entity_3[entity_1] = "";
  char entity_5 = 'L';
  char* entity_4;
  memset(entity_3, 'G', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, entity_1*sizeof(char));
}