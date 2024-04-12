void fun()
{
  int entity_0 = 95;
  char entity_2[86] = "";
  entity_2 = NULL;
  char* entity_8;
  char* entity_5;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memset(entity_2, 'X', 86-1);
  entity_2[86-1]='';
  strcpy(entity_8, entity_2);
}