void fun()
{
  char entity_1[8] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_8[49] = "";
  entity_8 = NULL;
  memset(entity_1, 'y', 8-1);
  entity_1[8-1]='';
  memset(entity_8, 's', 49-1);
  entity_8[49-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  strcpy(entity_5, entity_8);
}