void fun()
{
  int entity_4 = 21;
  char entity_6[10] = "";
  entity_6 = NULL;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'u', entity_4-1);
  entity_9[entity_4-1]='';
  entity_2 = (char*)malloc(0*sizeof(char));
  entity_2[0-1]='';
  memset(entity_6, 'u', 10-1);
  entity_6[10-1]='';
  entity_9[23] = 'E';
}