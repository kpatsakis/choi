void fun()
{
  int entity_7 = 11;
  int entity_0 = 0;
  char* entity_4;
  char entity_9[84] = "";
  memset(entity_9, 'i', 84-1);
  entity_9[84-1]='0';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, 84*sizeof(char));
}