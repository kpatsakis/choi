void fun()
{
  int entity_9 = 14;
  char entity_8[59] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_6 = 'f';
  memset(entity_8, 'o', 59-1);
  entity_8[59-1]='';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  strcpy(entity_7, entity_8);
}