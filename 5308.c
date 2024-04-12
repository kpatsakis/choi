void fun()
{
  char* entity_7;
  char entity_8[73] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  memset(entity_8, 's', 73-1);
  entity_8[73-1]='';
  strcpy(entity_7, entity_8);
}