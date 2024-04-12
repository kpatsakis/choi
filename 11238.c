void fun()
{
  char entity_1[88] = "";
  char* entity_9;
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'N', 88-1);
  entity_1[88-1]='0';
  strcpy(entity_9, entity_1);
}