void fun()
{
  int entity_5 = 48;
  char entity_0[55] = "";
  char* entity_9;
  char* entity_4;
  memset(entity_0, 'T', 55-1);
  entity_0[55-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_4, entity_0, 55*sizeof(char));
}