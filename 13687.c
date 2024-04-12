void fun()
{
  int entity_9 = 22;
  char entity_0[entity_9] = "";
  char* entity_8;
  char* entity_6;
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'C', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  entity_9 = 5;
  memcpy(entity_6, entity_0, entity_9*sizeof(char));
}