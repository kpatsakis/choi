void fun()
{
  char entity_5[35] = "";
  char* entity_7;
  memset(entity_5, 'P', 35-1);
  entity_5[35-1]='0';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_5);
}