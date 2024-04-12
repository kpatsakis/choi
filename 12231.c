void fun()
{
  int entity_9 = 84;
  char entity_4[91] = "";
  char entity_7[entity_9] = "";
  char* entity_3;
  char entity_5 = 'Y';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'd', 91-1);
  entity_4[91-1]='0';
  memset(entity_7, 'l', entity_9-1);
  entity_7[entity_9-1]='0';
  memcpy(entity_3, entity_7, entity_9*sizeof(char));
}