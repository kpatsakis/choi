void fun()
{
  char entity_8 = 'b';
  char entity_4[47] = "";
  char* entity_6;
  char entity_2 = 'T';
  memset(entity_4, 'h', 47-1);
  entity_4[47-1]='0';
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}