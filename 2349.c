void fun()
{
  char entity_1[65] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memset(entity_1, 'd', 65-1);
  entity_1[65-1]='';
  strcpy(entity_8, entity_1);
}