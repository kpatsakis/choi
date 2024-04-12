void fun()
{
  int entity_4 = 73;
  entity_4 = 37;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_5[54] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_5, 'b', 54-1);
  entity_5[54-1]='';
  memset(entity_6, 'z', entity_4-1);
  entity_6[entity_4-1]='';
  entity_6[100] = 'K';
}