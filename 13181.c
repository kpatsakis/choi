void fun()
{
  int entity_4 = 19;
  char entity_9[12] = "";
  char entity_5 = 'm';
  char* entity_7;
  memset(entity_9, 'w', 12-1);
  entity_9[12-1]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  entity_4 = 57;
  memcpy(entity_7, entity_9, 12*sizeof(char));
}