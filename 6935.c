void fun()
{
  char* entity_8;
  char* entity_7;
  char entity_5[80] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  memset(entity_5, 'n', 80-1);
  entity_5[80-1]='';
  strcpy(entity_8, entity_5);
}