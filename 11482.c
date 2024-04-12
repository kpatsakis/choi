void fun()
{
  char entity_8[90] = "";
  char* entity_7;
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'v', 90-1);
  entity_8[90-1]='0';
  strcpy(entity_7, entity_8);
}