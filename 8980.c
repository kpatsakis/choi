void fun()
{
  int entity_4 = 6;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_3;
  char* entity_7;
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memset(entity_6, 'c', entity_4-1);
  entity_6[entity_4-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memcpy(entity_3, entity_6, entity_4*sizeof(char));
}