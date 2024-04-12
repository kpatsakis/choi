void fun()
{
  char entity_8[44] = "";
  entity_8 = NULL;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[86-1]='';
  memset(entity_8, 'o', 44-1);
  entity_8[44-1]='';
  memset(entity_4, 'f', 71-1);
  entity_4[71-1]='';
  memcpy(entity_5, entity_4, 71*sizeof(char));
}