void fun()
{
  char entity_1[51] = "";
  char* entity_2;
  char entity_9[86] = "";
  memset(entity_9, 'T', 86-1);
  entity_9[86-1]='0';
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'S', 51-1);
  entity_1[51-1]='0';
  strcpy(entity_2, entity_1);
}