void fun()
{
  int entity_1 = 6;
  char entity_7[21] = "";
  entity_7 = NULL;
  char entity_9[44] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_4 = 'F';
  memset(entity_7, 'W', 21-1);
  entity_7[21-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memset(entity_9, 't', 44-1);
  entity_9[44-1]='';
  entity_9[entity_1] = 'K';
}