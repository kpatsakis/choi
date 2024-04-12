void fun()
{
  int entity_1 = 70;
  int entity_6 = 11;
  char* entity_9;
  char entity_8[36] = "";
  char entity_2[37] = "";
  memset(entity_2, 'K', 37-1);
  entity_2[37-1]='0';
  entity_9 = (char*)malloc(100*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'j', 36-1);
  entity_8[36-1]='0';
  memcpy(entity_9, entity_8, 36*sizeof(char));
}