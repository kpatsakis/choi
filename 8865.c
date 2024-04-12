void fun()
{
  int entity_3 = 71;
  int entity_7 = 44;
  int entity_4 = 97;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_2[44] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_9, 'w', entity_7-1);
  entity_9[entity_7-1]='';
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  memset(entity_2, 'E', 44-1);
  entity_2[44-1]='';
  entity_7 = 6;
  memcpy(entity_6, entity_9, entity_7*sizeof(char));
}