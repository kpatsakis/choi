void fun()
{
  int entity_7 = 26;
  int entity_2 = 0;
  int entity_9 = 65;
  char entity_6[60] = "";
  entity_6 = NULL;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memset(entity_6, 'O', 60-1);
  entity_6[60-1]='';
  memset(entity_8, 'd', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 84;
  memcpy(entity_3, entity_8, entity_7*sizeof(char));
}