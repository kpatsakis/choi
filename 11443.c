void fun()
{
  char* entity_9;
  char entity_2[73] = "";
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'f', 73-1);
  entity_2[73-1]='0';
  memcpy(entity_9, entity_2, 73*sizeof(char));
}