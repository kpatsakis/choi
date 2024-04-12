void fun()
{
  int entity_2 = 48;
  char* entity_7;
  char entity_8[97] = "";
  entity_8 = NULL;
  memset(entity_8, 'C', 97-1);
  entity_8[97-1]='';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  strcpy(entity_7, entity_8);
}