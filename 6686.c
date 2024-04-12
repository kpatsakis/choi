void fun()
{
  char entity_4[16] = "";
  entity_4 = NULL;
  char* entity_8;
  char* entity_2;
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memset(entity_4, 'J', 16-1);
  entity_4[16-1]='';
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[42-1]='';
  strcpy(entity_8, entity_4);
}