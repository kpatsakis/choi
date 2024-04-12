void fun()
{
  char* entity_3;
  char entity_0 = 'Q';
  char entity_8[47] = "";
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'E', 47-1);
  entity_8[47-1]='0';
  strcpy(entity_3, entity_8);
}