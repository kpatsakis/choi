void fun()
{
  char entity_6[42] = "";
  char* entity_9;
  char* entity_7;
  memset(entity_6, 'K', 42-1);
  entity_6[42-1]='0';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[0]='0';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_7, entity_6, 42*sizeof(char));
}