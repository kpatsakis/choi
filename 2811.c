void fun()
{
  int entity_8 = 72;
  char* entity_6;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_5 = 'B';
  char* entity_7;
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[66-1]='';
  memset(entity_1, 'A', entity_8-1);
  entity_1[entity_8-1]='';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  memcpy(entity_6, entity_1, entity_8*sizeof(char));
}