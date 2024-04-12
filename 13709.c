void fun()
{
  int entity_0 = 79;
  char* entity_1;
  char entity_2[entity_0] = "";
  char* entity_6;
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[0]='0';
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'y', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_0 = 61;
  memcpy(entity_1, entity_2, entity_0*sizeof(char));
}