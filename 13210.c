void fun()
{
  int entity_5 = 73;
  int entity_6 = 74;
  entity_5 = 33;
  char* entity_9;
  char entity_1[34] = "";
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 't', 34-1);
  entity_1[34-1]='0';
  strcpy(entity_9, entity_1);
}