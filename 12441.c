void fun()
{
  int entity_5 = 64;
  int entity_9 = 69;
  char* entity_4;
  char entity_1[91] = "";
  char entity_2[67] = "";
  memset(entity_1, 't', 91-1);
  entity_1[91-1]='0';
  memset(entity_2, 'u', 67-1);
  entity_2[67-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 67*sizeof(char));
}