void fun()
{
  int entity_0 = 32;
  char entity_1[98] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_4;
  char entity_3[62] = "";
  entity_3 = NULL;
  memset(entity_3, 'a', 62-1);
  entity_3[62-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_1, 'T', 98-1);
  entity_1[98-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  entity_0 = 92;
  memcpy(entity_5, entity_1, 98*sizeof(char));
}