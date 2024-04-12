void fun()
{
  int entity_3 = 34;
  entity_3 = 19;
  char entity_4 = 'H';
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_2 = 'F';
  memset(entity_9, 'a', entity_3-1);
  entity_9[entity_3-1]='';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memcpy(entity_8, entity_9, entity_3*sizeof(char));
}