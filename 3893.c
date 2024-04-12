void fun()
{
  int entity_8 = 37;
  char* entity_3;
  char entity_4[64] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', 64-1);
  entity_4[64-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  strcpy(entity_3, entity_4);
}