void fun()
{
  int entity_9 = 19;
  int entity_8 = 36;
  entity_8 = 14;
  char* entity_7;
  char entity_2[33] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_2, 'N', 33-1);
  entity_2[33-1]='';
  entity_5 = (char*)malloc(56*sizeof(char));
  entity_5[56-1]='';
  memcpy(entity_7, entity_2, 33*sizeof(char));
}