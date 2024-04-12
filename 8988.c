void fun()
{
  int entity_4 = 35;
  int entity_2 = 72;
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_3[74] = "";
  entity_3 = NULL;
  memset(entity_1, 'k', 32-1);
  entity_1[32-1]='';
  memset(entity_3, 'z', 74-1);
  entity_3[74-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  entity_2 = 64;
  memcpy(entity_8, entity_1, 32*sizeof(char));
}