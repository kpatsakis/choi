void fun()
{
  int entity_8 = 93;
  char* entity_0;
  char entity_9[73] = "";
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'p', 73-1);
  entity_9[73-1]='0';
  memcpy(entity_0, entity_9, 73*sizeof(char));
}