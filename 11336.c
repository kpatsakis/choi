void fun()
{
  int entity_8 = 99;
  char* entity_7;
  char entity_9[22] = "";
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'd', 22-1);
  entity_9[22-1]='0';
  strcpy(entity_7, entity_9);
}