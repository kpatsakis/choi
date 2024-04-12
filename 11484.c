void fun()
{
  char entity_7[55] = "";
  char* entity_1;
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'S', 55-1);
  entity_7[55-1]='0';
  strcpy(entity_1, entity_7);
}