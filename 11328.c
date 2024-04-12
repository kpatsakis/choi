void fun()
{
  char* entity_5;
  char entity_7[71] = "";
  memset(entity_7, 'P', 71-1);
  entity_7[71-1]='0';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_7);
}