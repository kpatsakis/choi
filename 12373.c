void fun()
{
  int entity_6 = 27;
  char entity_1[83] = "";
  char* entity_9;
  memset(entity_1, 'a', 83-1);
  entity_1[83-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_1);
}