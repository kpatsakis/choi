void fun()
{
  char entity_1[7] = "";
  char* entity_7;
  memset(entity_1, 'T', 7-1);
  entity_1[7-1]='0';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_1);
}