void fun()
{
  int entity_2 = 89;
  entity_2 = 69;
  char* entity_7;
  char* entity_3;
  char entity_6[43] = "";
  entity_6 = NULL;
  char entity_9 = 'v';
  char entity_4 = 'J';
  memset(entity_6, 'b', 43-1);
  entity_6[43-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  strcpy(entity_3, entity_6);
}