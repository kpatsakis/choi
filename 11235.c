void fun()
{
  char entity_4[44] = "";
  char* entity_2;
  memset(entity_4, 'v', 44-1);
  entity_4[44-1]='0';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_4);
}