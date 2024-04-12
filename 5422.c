void fun()
{
  int entity_5 = 89;
  char* entity_7;
  char* entity_2;
  char entity_3 = 'B';
  char entity_9[99] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_9, 'l', 99-1);
  entity_9[99-1]='';
  memcpy(entity_2, entity_9, 99*sizeof(char));
}