void fun()
{
  char entity_2[61] = "";
  char* entity_8;
  char entity_4[17] = "";
  memset(entity_4, 'h', 17-1);
  entity_4[17-1]='0';
  memset(entity_2, 'S', 61-1);
  entity_2[61-1]='0';
  entity_8 = (char*)malloc(3*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_4);
}