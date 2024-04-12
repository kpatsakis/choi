void fun()
{
  int entity_8 = 59;
  entity_8 = 61;
  char* entity_0;
  char entity_5 = 'A';
  char entity_2[54] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_3 = 'q';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_2, 'L', 54-1);
  entity_2[54-1]='';
  memcpy(entity_9, entity_2, 54*sizeof(char));
}