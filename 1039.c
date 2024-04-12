void fun()
{
  int entity_2 = 17;
  char entity_8[93] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'o', 93-1);
  entity_8[93-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  strcpy(entity_5, entity_8);
}