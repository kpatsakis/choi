void fun()
{
  char* entity_1;
  char entity_9[44] = "";
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'd', 44-1);
  entity_9[44-1]='0';
  strcpy(entity_1, entity_9);
}