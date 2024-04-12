void fun()
{
  int entity_2 = 90;
  int entity_6 = 64;
  entity_2 = 74;
  char entity_5[27] = "";
  entity_5 = NULL;
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_5, 'T', 27-1);
  entity_5[27-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_1, 'C', 32-1);
  entity_1[32-1]='';
  memcpy(entity_8, entity_1, 32*sizeof(char));
}