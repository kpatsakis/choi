void fun()
{
  int entity_2 = 30;
  char entity_0 = 'a';
  char entity_3[9] = "";
  entity_3 = NULL;
  char entity_7 = 'K';
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_3, 'm', 9-1);
  entity_3[9-1]='';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  memset(entity_9, 'M', entity_2-1);
  entity_9[entity_2-1]='';
  memcpy(entity_5, entity_9, entity_2*sizeof(char));
}