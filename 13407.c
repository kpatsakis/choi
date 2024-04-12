void fun()
{
  int entity_8 = 21;
  char* entity_0;
  char* entity_9;
  char entity_1[entity_8] = "";
  memset(entity_1, 'j', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[0]='0';
  entity_8 = 43;
  memcpy(entity_9, entity_1, entity_8*sizeof(char));
}