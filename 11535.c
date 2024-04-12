void fun()
{
  char* entity_7;
  char entity_1[61] = "";
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'Y', 61-1);
  entity_1[61-1]='0';
  strcpy(entity_7, entity_1);
}