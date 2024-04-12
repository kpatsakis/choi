void fun()
{
  char entity_2[83] = "";
  char* entity_6;
  memset(entity_2, 'L', 83-1);
  entity_2[83-1]='0';
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_2);
}