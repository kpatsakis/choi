void fun()
{
  char entity_6[32] = "";
  char* entity_5;
  memset(entity_6, 'y', 32-1);
  entity_6[32-1]='0';
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}