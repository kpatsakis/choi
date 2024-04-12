void fun()
{
  char* entity_2;
  char entity_5[23] = "";
  char* entity_4;
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'm', 23-1);
  entity_5[23-1]='0';
  strcpy(entity_2, entity_5);
}