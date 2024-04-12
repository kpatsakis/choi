void fun()
{
  int entity_3 = 46;
  int entity_1 = 65;
  int entity_4 = 84;
  char* entity_5;
  char* entity_0;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'W', entity_4-1);
  entity_8[entity_4-1]='';
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  entity_0 = (char*)malloc(0*sizeof(char));
  entity_0[0-1]='';
  strcpy(entity_5, entity_8);
}