void fun()
{
  char* entity_6;
  char entity_5[34] = "";
  memset(entity_5, 'e', 34-1);
  entity_5[34-1]='0';
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_5);
}