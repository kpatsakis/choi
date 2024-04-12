void fun()
{
  int entity_6 = 15;
  int entity_4 = 69;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'X', entity_4-1);
  entity_1[entity_4-1]='';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  entity_4 = 72;
  memcpy(entity_7, entity_1, entity_4*sizeof(char));
}