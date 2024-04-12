void fun()
{
  int entity_6 = 73;
  char* entity_0;
  char* entity_9;
  char entity_8[58] = "";
  memset(entity_8, 'j', 58-1);
  entity_8[58-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_9, entity_8, 58*sizeof(char));
}