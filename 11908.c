void fun()
{
  char* entity_5;
  char entity_4[69] = "";
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'd', 69-1);
  entity_4[69-1]='0';
  strcpy(entity_5, entity_4);
}