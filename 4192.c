void fun()
{
  int entity_7 = 96;
  int entity_3 = 58;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_1;
  char* entity_5;
  char entity_2 = 'U';
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[56-1]='';
  memset(entity_8, 'd', entity_3-1);
  entity_8[entity_3-1]='';
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[27-1]='';
  memcpy(entity_1, entity_8, entity_3*sizeof(char));
}