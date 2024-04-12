void fun()
{
  int entity_0 = 58;
  char* entity_8;
  char entity_9[84] = "";
  char* entity_4;
  memset(entity_9, 'f', 84-1);
  entity_9[84-1]='0';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[0]='0';
  entity_0 = 94;
  memcpy(entity_8, entity_9, 84*sizeof(char));
}