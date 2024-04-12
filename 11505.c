void fun()
{
  char* entity_5;
  char entity_2[64] = "";
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'n', 64-1);
  entity_2[64-1]='0';
  strcpy(entity_5, entity_2);
}