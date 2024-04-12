void fun()
{
  int entity_7 = 48;
  entity_7 = 76;
  char* entity_5;
  char entity_9[3] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(65*sizeof(char));
  entity_8[65-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_9, 'w', 3-1);
  entity_9[3-1]='';
  memcpy(entity_5, entity_9, 3*sizeof(char));
}