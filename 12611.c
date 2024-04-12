void fun()
{
  int entity_6 = 72;
  char* entity_0;
  char entity_8[58] = "";
  char entity_7[entity_6] = "";
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'h', entity_6-1);
  entity_7[entity_6-1]='0';
  memset(entity_8, 'v', 58-1);
  entity_8[58-1]='0';
  memcpy(entity_0, entity_7, entity_6*sizeof(char));
}