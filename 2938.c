void fun()
{
  int entity_8 = 52;
  int entity_5 = 42;
  int entity_1 = 82;
  entity_8 = 52;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_2;
  memset(entity_4, 'j', entity_8-1);
  entity_4[entity_8-1]='';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  strcpy(entity_2, entity_4);
}