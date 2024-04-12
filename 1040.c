void fun()
{
  int entity_3 = 63;
  char* entity_8;
  char entity_0 = 'r';
  char entity_1[28] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  memset(entity_1, 'z', 28-1);
  entity_1[28-1]='';
  strcpy(entity_8, entity_1);
}