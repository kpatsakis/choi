void fun()
{
  int entity_5 = 77;
  int entity_1 = 12;
  char* entity_9;
  char entity_6[49] = "";
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'a', 49-1);
  entity_6[49-1]='0';
  entity_1 = 65;
  strcpy(entity_9, entity_6);
}