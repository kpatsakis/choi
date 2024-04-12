void fun()
{
  char* entity_4;
  char entity_2[48] = "";
  memset(entity_2, 'r', 48-1);
  entity_2[48-1]='0';
  entity_4 = (char*)malloc(8*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}