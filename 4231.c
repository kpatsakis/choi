void fun()
{
  int entity_2 = 11;
  char entity_3[99] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_3, 'p', 99-1);
  entity_3[99-1]='';
  entity_2 = 35;
  strcpy(entity_8, entity_3);
}