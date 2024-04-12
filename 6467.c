void fun()
{
  int entity_6 = 31;
  entity_6 = 72;
  char* entity_9;
  char entity_5[57] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_5, 'j', 57-1);
  entity_5[57-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  memset(entity_2, 'c', entity_6-1);
  entity_2[entity_6-1]='';
  memcpy(entity_0, entity_2, entity_6*sizeof(char));
}