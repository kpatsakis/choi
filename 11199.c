void fun()
{
  char entity_9[8] = "";
  char entity_8[82] = "";
  char* entity_2;
  memset(entity_8, 'd', 82-1);
  entity_8[82-1]='0';
  memset(entity_9, 'c', 8-1);
  entity_9[8-1]='0';
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, 82*sizeof(char));
}