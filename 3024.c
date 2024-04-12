void fun()
{
  char entity_8[59] = "";
  entity_8 = NULL;
  char entity_7 = 'n';
  char* entity_0;
  memset(entity_8, 'n', 59-1);
  entity_8[59-1]='';
  entity_0 = (char*)malloc(89*sizeof(char));
  entity_0[89-1]='';
  memcpy(entity_0, entity_8, 59*sizeof(char));
}