void fun()
{
  char* entity_6;
  char entity_7[31] = "";
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'W', 31-1);
  entity_7[31-1]='0';
  strcpy(entity_6, entity_7);
}