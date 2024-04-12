void fun()
{
  char entity_9[96] = "";
  char* entity_1;
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'L', 96-1);
  entity_9[96-1]='0';
  strcpy(entity_1, entity_9);
}