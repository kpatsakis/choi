void fun()
{
  char* entity_1;
  char entity_3[8] = "";
  char entity_4[7] = "";
  memset(entity_4, 'F', 7-1);
  entity_4[7-1]='0';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 's', 8-1);
  entity_3[8-1]='0';
  strcpy(entity_1, entity_3);
}