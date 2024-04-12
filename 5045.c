void fun()
{
  char entity_4 = 'b';
  char* entity_8;
  char entity_7[84] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memset(entity_7, 'C', 84-1);
  entity_7[84-1]='';
  strcpy(entity_8, entity_7);
}