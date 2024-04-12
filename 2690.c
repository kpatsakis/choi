void fun()
{
  int entity_7 = 7;
  int entity_5 = 44;
  entity_5 = 80;
  char entity_2[33] = "";
  entity_2 = NULL;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'D', entity_5-1);
  entity_6[entity_5-1]='';
  memset(entity_2, 'X', 33-1);
  entity_2[33-1]='';
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  entity_6[82] = 't';
}