void fun()
{
  int entity_0 = 81;
  char entity_9[10] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_1 = 'M';
  memset(entity_9, 'Z', 10-1);
  entity_9[10-1]='';
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[75-1]='';
  memset(entity_3, 'a', entity_0-1);
  entity_3[entity_0-1]='';
  memcpy(entity_6, entity_3, entity_0*sizeof(char));
}