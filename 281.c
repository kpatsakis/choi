void fun()
{
  int entity_5 = 53;
  char* entity_6;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  entity_3 = (char*)malloc(72*sizeof(char));
  entity_3[72-1]='';
  memset(entity_9, 'A', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[13] = 'K';
}