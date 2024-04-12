void fun()
{
  int entity_6 = 14;
  char entity_9[30] = "";
  char* entity_4;
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'V', 30-1);
  entity_9[30-1]='0';
  memcpy(entity_4, entity_9, 30*sizeof(char));
}