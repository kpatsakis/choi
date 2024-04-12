void fun()
{
  char entity_8[94] = "";
  char* entity_7;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'F', 94-1);
  entity_8[94-1]='0';
  strcpy(entity_7, entity_8);
}