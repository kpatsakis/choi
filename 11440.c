void fun()
{
  char entity_3[73] = "";
  char* entity_8;
  memset(entity_3, 'B', 73-1);
  entity_3[73-1]='0';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}