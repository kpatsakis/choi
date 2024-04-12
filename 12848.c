void fun()
{
  int entity_1 = 14;
  char* entity_9;
  char entity_6 = 'm';
  char entity_5[20] = "";
  memset(entity_5, 'e', 20-1);
  entity_5[20-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_5, 20*sizeof(char));
}