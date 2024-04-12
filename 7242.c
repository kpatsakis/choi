void fun()
{
  int entity_4 = 23;
  int entity_5 = 28;
  char* entity_3;
  char entity_9[27] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', 27-1);
  entity_9[27-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memcpy(entity_3, entity_9, 27*sizeof(char));
}