void fun()
{
  int entity_8 = 64;
  entity_8 = 21;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_2[58] = "";
  entity_2 = NULL;
  memset(entity_9, 'v', entity_8-1);
  entity_9[entity_8-1]='';
  memset(entity_2, 'D', 58-1);
  entity_2[58-1]='';
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[90-1]='';
  memcpy(entity_6, entity_9, entity_8*sizeof(char));
}