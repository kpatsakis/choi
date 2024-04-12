void fun()
{
  char* entity_5;
  char entity_7[66] = "";
  memset(entity_7, 'H', 66-1);
  entity_7[66-1]='0';
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_7);
}