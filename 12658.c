void fun()
{
  int entity_0 = 42;
  int entity_8 = 6;
  char entity_6 = 'j';
  char entity_4[entity_0] = "";
  char* entity_7;
  char* entity_1;
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'H', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_1, entity_4, entity_0*sizeof(char));
}