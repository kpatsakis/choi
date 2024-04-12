void fun()
{
  int entity_9 = 61;
  int entity_7 = 1;
  char entity_5[27] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_3[60] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_3, 'C', 60-1);
  entity_3[60-1]='';
  memset(entity_5, 'x', 27-1);
  entity_5[27-1]='';
  memcpy(entity_8, entity_3, 60*sizeof(char));
}