void fun()
{
  int entity_5 = 92;
  char entity_9[93] = "";
  char* entity_0;
  memset(entity_9, 'l', 93-1);
  entity_9[93-1]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  entity_5 = 3;
  memcpy(entity_0, entity_9, 93*sizeof(char));
}