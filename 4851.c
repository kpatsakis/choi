void fun()
{
  int entity_7 = 100;
  int entity_6 = 25;
  char* entity_2;
  char* entity_9;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[15-1]='';
  memset(entity_5, 'C', entity_7-1);
  entity_5[entity_7-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  entity_7 = 38;
  entity_5[41] = 'f';
}