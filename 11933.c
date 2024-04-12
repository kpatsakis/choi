void fun()
{
  char* entity_4;
  char entity_1[71] = "";
  memset(entity_1, 't', 71-1);
  entity_1[71-1]='0';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_1);
}