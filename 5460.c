void fun()
{
  int entity_9 = 74;
  entity_9 = 98;
  char entity_2[5] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_2, 'L', 5-1);
  entity_2[5-1]='';
  memcpy(entity_3, entity_2, 5*sizeof(char));
}