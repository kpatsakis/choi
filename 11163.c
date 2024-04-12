void fun()
{
  char entity_8[58] = "";
  char* entity_3;
  memset(entity_8, 'P', 58-1);
  entity_8[58-1]='0';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_8);
}