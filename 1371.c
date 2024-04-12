void fun()
{
  int entity_5 = 47;
  char* entity_7;
  char* entity_4;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'w', entity_5-1);
  entity_8[entity_5-1]='';
  entity_4 = (char*)malloc(79*sizeof(char));
  entity_4[79-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  entity_5 = 90;
  strcpy(entity_7, entity_8);
}