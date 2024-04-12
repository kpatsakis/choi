void fun()
{
  int entity_3 = 15;
  entity_3 = 57;
  char entity_8[62] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'k', 62-1);
  entity_8[62-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  strcpy(entity_1, entity_8);
}