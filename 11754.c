void fun()
{
  char entity_1[14] = "";
  char* entity_5;
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'm', 14-1);
  entity_1[14-1]='0';
  strcpy(entity_5, entity_1);
}