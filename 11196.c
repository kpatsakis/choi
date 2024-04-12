void fun()
{
  char entity_7[4] = "";
  char* entity_8;
  memset(entity_7, 'x', 4-1);
  entity_7[4-1]='0';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}