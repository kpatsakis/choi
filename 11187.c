void fun()
{
  char* entity_8;
  char entity_1[23] = "";
  memset(entity_1, 'j', 23-1);
  entity_1[23-1]='0';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}