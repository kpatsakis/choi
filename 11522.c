void fun()
{
  char* entity_7;
  char entity_8[34] = "";
  memset(entity_8, 'v', 34-1);
  entity_8[34-1]='0';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_8);
}