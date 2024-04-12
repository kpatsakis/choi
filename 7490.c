void fun()
{
  int entity_8 = 66;
  entity_8 = 82;
  char* entity_5;
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_1, 'L', 32-1);
  entity_1[32-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memcpy(entity_5, entity_1, 32*sizeof(char));
}