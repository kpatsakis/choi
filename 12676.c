void fun()
{
  int entity_3 = 79;
  char entity_2 = 'L';
  char entity_4[15] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'l', 15-1);
  entity_4[15-1]='0';
  memcpy(entity_6, entity_4, 15*sizeof(char));
}