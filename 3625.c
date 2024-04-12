void fun()
{
  int entity_0 = 84;
  char entity_8[71] = "";
  entity_8 = NULL;
  char entity_1[2] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_8, 'B', 71-1);
  entity_8[71-1]='';
  memset(entity_1, 'S', 2-1);
  entity_1[2-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  entity_0 = 95;
  memcpy(entity_5, entity_8, 71*sizeof(char));
}