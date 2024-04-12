void fun()
{
  char* entity_5;
  char entity_2[8] = "";
  memset(entity_2, 's', 8-1);
  entity_2[8-1]='0';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_2);
}