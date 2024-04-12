void fun()
{
  char entity_6[54] = "";
  char* entity_9;
  char entity_8 = 'B';
  memset(entity_6, 'H', 54-1);
  entity_6[54-1]='0';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_6, 54*sizeof(char));
}