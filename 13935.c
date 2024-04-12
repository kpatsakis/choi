void fun()
{
  int entity_6 = 61;
  entity_6 = 73;
  char entity_7[14] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'R', 14-1);
  entity_7[14-1]='0';
  strcpy(entity_9, entity_7);
}