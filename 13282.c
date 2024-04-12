void fun()
{
  int entity_7 = 7;
  entity_7 = 87;
  char entity_8[entity_7] = "";
  char* entity_9;
  memset(entity_8, 'S', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_8, entity_7*sizeof(char));
}