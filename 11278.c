void fun()
{
  char entity_7[76] = "";
  char* entity_3;
  memset(entity_7, 'v', 76-1);
  entity_7[76-1]='0';
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_7);
}