void fun()
{
  int entity_0 = 89;
  char entity_9[41] = "";
  char* entity_4;
  memset(entity_9, 'U', 41-1);
  entity_9[41-1]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, 41*sizeof(char));
}