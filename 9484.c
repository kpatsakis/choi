void fun()
{
  int entity_5 = 22;
  entity_5 = 35;
  char entity_6[9] = "";
  entity_6 = NULL;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  memset(entity_7, 'W', entity_5-1);
  entity_7[entity_5-1]='';
  memset(entity_6, 'R', 9-1);
  entity_6[9-1]='';
  memcpy(entity_8, entity_7, entity_5*sizeof(char));
}