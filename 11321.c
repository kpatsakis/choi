void fun()
{
  char* entity_9;
  char entity_7[75] = "";
  char entity_3[39] = "";
  memset(entity_7, 'p', 75-1);
  entity_7[75-1]='0';
  memset(entity_3, 'Z', 39-1);
  entity_3[39-1]='0';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 39*sizeof(char));
}