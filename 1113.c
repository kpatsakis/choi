void fun()
{
  int entity_3 = 16;
  entity_3 = 66;
  char* entity_1;
  char entity_8[14] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_8, 'W', 14-1);
  entity_8[14-1]='';
  strcpy(entity_1, entity_8);
}