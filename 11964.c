void fun()
{
  char* entity_2;
  char entity_5[57] = "";
  memset(entity_5, 'm', 57-1);
  entity_5[57-1]='0';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}