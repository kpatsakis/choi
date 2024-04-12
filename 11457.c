void fun()
{
  char entity_8[66] = "";
  char* entity_1;
  memset(entity_8, 's', 66-1);
  entity_8[66-1]='0';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}