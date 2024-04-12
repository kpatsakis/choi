void fun()
{
  int entity_8 = 98;
  char entity_9[5] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'V', 5-1);
  entity_9[5-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memcpy(entity_2, entity_9, 5*sizeof(char));
}