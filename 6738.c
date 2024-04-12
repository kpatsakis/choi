void fun()
{
  int entity_3 = 3;
  char* entity_5;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', entity_3-1);
  entity_8[entity_3-1]='';
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  entity_3 = 96;
  strcpy(entity_5, entity_8);
}