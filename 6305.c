void fun()
{
  int entity_3 = 61;
  char entity_7[33] = "";
  entity_7 = NULL;
  char entity_1 = 'K';
  char* entity_5;
  char* entity_4;
  memset(entity_7, 'u', 33-1);
  entity_7[33-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  strcpy(entity_4, entity_7);
}