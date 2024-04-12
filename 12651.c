void fun()
{
  int entity_0 = 80;
  int entity_9 = 56;
  char entity_8[entity_0] = "";
  char* entity_7;
  char* entity_3;
  char* entity_1;
  memset(entity_8, 'y', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[0]='0';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_1, entity_8, entity_0*sizeof(char));
}