void fun()
{
  char* entity_9;
  char entity_2[3] = "";
  memset(entity_2, 'd', 3-1);
  entity_2[3-1]='0';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, 3*sizeof(char));
}