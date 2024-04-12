void fun()
{
  char* entity_2;
  char entity_1[35] = "";
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'k', 35-1);
  entity_1[35-1]='0';
  strcpy(entity_2, entity_1);
}