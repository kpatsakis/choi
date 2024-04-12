void fun()
{
  int entity_9 = 65;
  char* entity_6;
  char entity_2[41] = "";
  entity_2 = NULL;
  char entity_5[48] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_5, 'z', 48-1);
  entity_5[48-1]='';
  memset(entity_2, 'h', 41-1);
  entity_2[41-1]='';
  memcpy(entity_6, entity_2, 41*sizeof(char));
}