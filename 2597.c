void fun()
{
  int entity_3 = 33;
  char entity_2[21] = "";
  entity_2 = NULL;
  char entity_1 = 'h';
  char* entity_8;
  memset(entity_2, 'j', 21-1);
  entity_2[21-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  strcpy(entity_8, entity_2);
}