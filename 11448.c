void fun()
{
  char* entity_5;
  char entity_8[8] = "";
  entity_5 = (char*)malloc(95*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'g', 8-1);
  entity_8[8-1]='0';
  strcpy(entity_5, entity_8);
}