void fun()
{
  char entity_1[15] = "";
  char* entity_9;
  char entity_6[12] = "";
  memset(entity_6, 'p', 12-1);
  entity_6[12-1]='0';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'n', 15-1);
  entity_1[15-1]='0';
  memcpy(entity_9, entity_1, 15*sizeof(char));
}