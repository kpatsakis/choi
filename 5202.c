void fun()
{
  int entity_9 = 75;
  char entity_2[75] = "";
  entity_2 = NULL;
  char entity_8 = 'W';
  char* entity_6;
  char entity_7[41] = "";
  entity_7 = NULL;
  memset(entity_2, 'b', 75-1);
  entity_2[75-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_7, 'A', 41-1);
  entity_7[41-1]='';
  entity_9 = 44;
  memcpy(entity_6, entity_2, 75*sizeof(char));
}