void fun()
{
  int entity_3 = 77;
  char entity_0 = 'g';
  char entity_6[entity_3] = "";
  char* entity_9;
  memset(entity_6, 't', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_6, entity_3*sizeof(char));
}