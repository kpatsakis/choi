void fun()
{
  int entity_8 = 97;
  char entity_1[entity_8] = "";
  char* entity_6;
  char* entity_0;
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'i', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[0]='0';
  entity_8 = 38;
  memcpy(entity_6, entity_1, entity_8*sizeof(char));
}