void fun()
{
  char entity_6[84] = "";
  char* entity_3;
  char entity_4 = 'l';
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'K', 84-1);
  entity_6[84-1]='0';
  strcpy(entity_3, entity_6);
}