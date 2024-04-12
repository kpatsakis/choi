void fun()
{
  int entity_1 = 38;
  char entity_9[83] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'Z', 83-1);
  entity_9[83-1]='0';
  strcpy(entity_7, entity_9);
}