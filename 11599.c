void fun()
{
  char* entity_5;
  char entity_3[14] = "";
  memset(entity_3, 'b', 14-1);
  entity_3[14-1]='0';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_3);
}