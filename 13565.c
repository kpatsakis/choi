void fun()
{
  int entity_8 = 58;
  int entity_1 = 62;
  entity_8 = 41;
  char* entity_4;
  char entity_2[96] = "";
  char entity_9 = 'z';
  memset(entity_2, 'l', 96-1);
  entity_2[96-1]='0';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 96*sizeof(char));
}