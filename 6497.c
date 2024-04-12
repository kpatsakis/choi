void fun()
{
  int entity_6 = 8;
  char entity_3[83] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_3, 'C', 83-1);
  entity_3[83-1]='';
  memcpy(entity_9, entity_3, 83*sizeof(char));
}