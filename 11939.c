void fun()
{
  char* entity_5;
  char entity_7[88] = "";
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'x', 88-1);
  entity_7[88-1]='0';
  strcpy(entity_5, entity_7);
}