void fun()
{
  char* entity_4;
  char entity_7[46] = "";
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'o', 46-1);
  entity_7[46-1]='0';
  strcpy(entity_4, entity_7);
}