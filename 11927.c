void fun()
{
  char* entity_9;
  char entity_0[73] = "";
  char* entity_2;
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'K', 73-1);
  entity_0[73-1]='0';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, 73*sizeof(char));
}