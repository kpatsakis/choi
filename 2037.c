void fun()
{
  int entity_8 = 75;
  char* entity_3;
  char entity_5[99] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_5, 'Z', 99-1);
  entity_5[99-1]='';
  entity_8 = 57;
  strcpy(entity_3, entity_5);
}