void fun()
{
  char* entity_3;
  char entity_4[96] = "";
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'c', 96-1);
  entity_4[96-1]='0';
  strcpy(entity_3, entity_4);
}