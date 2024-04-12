void fun()
{
  char entity_9 = 's';
  char* entity_1;
  char entity_6[25] = "";
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'H', 25-1);
  entity_6[25-1]='0';
  strcpy(entity_1, entity_6);
}