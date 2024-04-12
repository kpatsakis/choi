void fun()
{
  int entity_4 = 19;
  int entity_6 = 47;
  entity_4 = 36;
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_0;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[26-1]='';
  memset(entity_7, 'k', 44-1);
  entity_7[44-1]='';
  memcpy(entity_9, entity_7, 44*sizeof(char));
}