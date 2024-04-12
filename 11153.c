void fun()
{
  char* entity_1;
  char entity_3[10] = "";
  memset(entity_3, 'l', 10-1);
  entity_3[10-1]='0';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_3);
}