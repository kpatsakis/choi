void fun()
{
  char entity_9[21] = "";
  char entity_0 = 'c';
  char* entity_1;
  entity_1 = (char*)malloc(80*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'i', 21-1);
  entity_9[21-1]='0';
  strcpy(entity_1, entity_9);
}