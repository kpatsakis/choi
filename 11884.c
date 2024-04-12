void fun()
{
  char entity_9[99] = "";
  char* entity_5;
  char entity_2 = 'v';
  char entity_1[15] = "";
  memset(entity_9, 'c', 99-1);
  entity_9[99-1]='0';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 't', 15-1);
  entity_1[15-1]='0';
  strcpy(entity_5, entity_1);
}