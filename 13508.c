void fun()
{
  int entity_7 = 11;
  int entity_9 = 22;
  char entity_6[47] = "";
  char* entity_0;
  char entity_1[entity_9] = "";
  memset(entity_1, 'r', entity_9-1);
  entity_1[entity_9-1]='0';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'Q', 47-1);
  entity_6[47-1]='0';
  entity_9 = 63;
  memcpy(entity_0, entity_1, entity_9*sizeof(char));
}