void fun()
{
  int entity_1 = 88;
  char entity_2[61] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memset(entity_2, 't', 61-1);
  entity_2[61-1]='';
  strcpy(entity_8, entity_2);
}