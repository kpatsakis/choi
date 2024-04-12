void fun()
{
  int entity_3 = 48;
  char entity_9[91] = "";
  char* entity_0;
  memset(entity_9, 'N', 91-1);
  entity_9[91-1]='0';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 91*sizeof(char));
}