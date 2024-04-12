void fun()
{
  char entity_8[73] = "";
  char* entity_6;
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'n', 73-1);
  entity_8[73-1]='0';
  memcpy(entity_6, entity_8, 73*sizeof(char));
}