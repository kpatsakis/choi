void fun()
{
  char* entity_9;
  char entity_1[44] = "";
  char entity_7 = 'b';
  memset(entity_1, 'b', 44-1);
  entity_1[44-1]='0';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_1);
}