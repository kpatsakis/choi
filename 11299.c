void fun()
{
  char entity_6[20] = "";
  char* entity_4;
  memset(entity_6, 'R', 20-1);
  entity_6[20-1]='0';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_6);
}