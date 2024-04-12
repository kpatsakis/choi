void fun()
{
  int entity_7 = 21;
  int entity_2 = 78;
  entity_7 = 68;
  char* entity_4;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', entity_7-1);
  entity_6[entity_7-1]='';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  memcpy(entity_4, entity_6, entity_7*sizeof(char));
}