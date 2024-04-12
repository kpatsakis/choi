void fun()
{
  char* entity_5;
  char entity_1[27] = "";
  char* entity_3;
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'M', 27-1);
  entity_1[27-1]='0';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_3, entity_1);
}