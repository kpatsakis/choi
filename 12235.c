void fun()
{
  int entity_9 = 84;
  char* entity_8;
  char entity_6[entity_9] = "";
  char* entity_0;
  char* entity_3;
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(71*sizeof(char));
  entity_3[0]='0';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'J', entity_9-1);
  entity_6[entity_9-1]='0';
  memcpy(entity_3, entity_6, entity_9*sizeof(char));
}