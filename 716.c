void fun()
{
  int entity_4 = 77;
  int entity_5 = 82;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_3;
  memset(entity_0, 'B', entity_5-1);
  entity_0[entity_5-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  entity_5 = 14;
  strcpy(entity_3, entity_0);
}