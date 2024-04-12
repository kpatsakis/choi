void fun()
{
  int entity_4 = 15;
  int entity_8 = 14;
  int entity_0 = 25;
  char entity_3[49] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'd', 49-1);
  entity_3[49-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_0 = 17;
  strcpy(entity_7, entity_3);
}