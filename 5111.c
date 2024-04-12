void fun()
{
  char entity_1[90] = "";
  entity_1 = NULL;
  char* entity_2;
  char* entity_8;
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  memset(entity_1, 'e', 90-1);
  entity_1[90-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  strcpy(entity_2, entity_1);
}