void fun()
{
  char* entity_1;
  char entity_2[72] = "";
  memset(entity_2, 'n', 72-1);
  entity_2[72-1]='0';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_2);
}