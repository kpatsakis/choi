void fun()
{
  char* entity_4;
  char entity_3[4] = "";
  memset(entity_3, 'z', 4-1);
  entity_3[4-1]='0';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_3);
}