void fun()
{
  char entity_1[93] = "";
  char* entity_4;
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'C', 93-1);
  entity_1[93-1]='0';
  strcpy(entity_4, entity_1);
}