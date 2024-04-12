void fun()
{
  int entity_5 = 73;
  int entity_0 = 6;
  char entity_6[24] = "";
  char* entity_9;
  memset(entity_6, 'Q', 24-1);
  entity_6[24-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_6);
}