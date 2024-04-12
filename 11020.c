void fun()
{
  char* entity_8;
  char entity_3[10] = "";
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'e', 10-1);
  entity_3[10-1]='0';
  strcpy(entity_8, entity_3);
}