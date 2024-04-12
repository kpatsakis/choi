void fun()
{
  int entity_8 = 57;
  char* entity_5;
  char entity_2[72] = "";
  entity_2 = NULL;
  char entity_9[35] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_9, 'T', 35-1);
  entity_9[35-1]='';
  memset(entity_2, 'p', 72-1);
  entity_2[72-1]='';
  memcpy(entity_5, entity_9, 35*sizeof(char));
}