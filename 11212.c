void fun()
{
  char* entity_4;
  char entity_7[64] = "";
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'f', 64-1);
  entity_7[64-1]='0';
  strcpy(entity_4, entity_7);
}