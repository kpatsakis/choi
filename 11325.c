void fun()
{
  char* entity_5;
  char entity_6[74] = "";
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'C', 74-1);
  entity_6[74-1]='0';
  strcpy(entity_5, entity_6);
}