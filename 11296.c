void fun()
{
  char* entity_3;
  char entity_5[18] = "";
  char entity_8[93] = "";
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'I', 18-1);
  entity_5[18-1]='0';
  memset(entity_8, 'L', 93-1);
  entity_8[93-1]='0';
  strcpy(entity_3, entity_5);
}