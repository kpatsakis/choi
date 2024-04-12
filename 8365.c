void fun()
{
  int entity_7 = 81;
  entity_7 = 61;
  char* entity_5;
  char entity_6[31] = "";
  entity_6 = NULL;
  char entity_8[19] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 19-1);
  entity_8[19-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_6, 'r', 31-1);
  entity_6[31-1]='';
  memcpy(entity_5, entity_6, 31*sizeof(char));
}