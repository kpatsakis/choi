void fun()
{
  char* entity_1;
  char entity_5[60] = "";
  memset(entity_5, 'G', 60-1);
  entity_5[60-1]='0';
  entity_1 = (char*)malloc(44*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_5);
}