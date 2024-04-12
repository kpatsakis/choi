void fun()
{
  int entity_1 = 23;
  char* entity_3;
  char entity_8[15] = "";
  entity_8 = NULL;
  memset(entity_8, 'S', 15-1);
  entity_8[15-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  strcpy(entity_3, entity_8);
}