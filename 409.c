void fun()
{
  int entity_8 = 47;
  int entity_7 = 54;
  entity_7 = 26;
  char* entity_2;
  char entity_5[53] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'N', 53-1);
  entity_5[53-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  entity_9 = (char*)malloc(59*sizeof(char));
  entity_9[59-1]='';
  memcpy(entity_2, entity_5, 53*sizeof(char));
}