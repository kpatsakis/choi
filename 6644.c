void fun()
{
  int entity_6 = 82;
  char entity_8 = 'G';
  char entity_7 = 'x';
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_9[8] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[91-1]='';
  memset(entity_9, 'S', 8-1);
  entity_9[8-1]='';
  memset(entity_4, 'b', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 68;
  memcpy(entity_2, entity_4, entity_6*sizeof(char));
}