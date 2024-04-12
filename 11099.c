void fun()
{
  char* entity_5;
  char entity_7[6] = "";
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'v', 6-1);
  entity_7[6-1]='0';
  strcpy(entity_5, entity_7);
}