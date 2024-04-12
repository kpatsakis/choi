void fun()
{
  char* entity_8;
  char entity_3[39] = "";
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'c', 39-1);
  entity_3[39-1]='0';
  strcpy(entity_8, entity_3);
}