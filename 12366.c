void fun()
{
  int entity_9 = 65;
  char* entity_6;
  char entity_4[79] = "";
  char entity_8[entity_9] = "";
  char* entity_0;
  memset(entity_4, 'y', 79-1);
  entity_4[79-1]='0';
  memset(entity_8, 't', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[0]='0';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_8, entity_9*sizeof(char));
}