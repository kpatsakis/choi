void fun()
{
  int entity_4 = 75;
  entity_4 = 75;
  char* entity_3;
  char entity_8[67] = "";
  entity_8 = NULL;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[43-1]='';
  memset(entity_9, 'N', entity_4-1);
  entity_9[entity_4-1]='';
  memset(entity_8, 'y', 67-1);
  entity_8[67-1]='';
  entity_7 = (char*)malloc(0*sizeof(char));
  entity_7[0-1]='';
  strcpy(entity_3, entity_9);
}