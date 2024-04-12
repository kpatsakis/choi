void fun()
{
  int entity_2 = 73;
  entity_2 = 32;
  char entity_3[93] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_7 = 'j';
  memset(entity_3, 'd', 93-1);
  entity_3[93-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  strcpy(entity_5, entity_3);
}