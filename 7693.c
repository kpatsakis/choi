void fun()
{
  int entity_4 = 54;
  int entity_5 = 68;
  char* entity_3;
  char entity_8[20] = "";
  entity_8 = NULL;
  char entity_1[55] = "";
  entity_1 = NULL;
  memset(entity_1, 'k', 55-1);
  entity_1[55-1]='';
  memset(entity_8, 'r', 20-1);
  entity_8[20-1]='';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  entity_1[entity_5] = 'E';
}