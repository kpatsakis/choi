void fun()
{
  int entity_8 = 26;
  char* entity_6;
  char entity_3 = 'k';
  char* entity_4;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memset(entity_9, 'a', entity_8-1);
  entity_9[entity_8-1]='';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memcpy(entity_6, entity_9, entity_8*sizeof(char));
}