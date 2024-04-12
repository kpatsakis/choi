void fun()
{
  char* entity_3;
  char entity_4[23] = "";
  memset(entity_4, 'S', 23-1);
  entity_4[23-1]='0';
  entity_3 = (char*)malloc(41*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}