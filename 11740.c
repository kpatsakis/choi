void fun()
{
  char* entity_3;
  char entity_2[86] = "";
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'F', 86-1);
  entity_2[86-1]='0';
  strcpy(entity_3, entity_2);
}