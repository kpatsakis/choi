void fun()
{
  char entity_8[64] = "";
  char* entity_7;
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'X', 64-1);
  entity_8[64-1]='0';
  strcpy(entity_7, entity_8);
}