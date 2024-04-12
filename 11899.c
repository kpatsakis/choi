void fun()
{
  char entity_8[19] = "";
  char* entity_1;
  memset(entity_8, 'D', 19-1);
  entity_8[19-1]='0';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}