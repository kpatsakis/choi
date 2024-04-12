void fun()
{
  int entity_1 = 33;
  int entity_4 = 39;
  char* entity_2;
  char entity_9[38] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', 38-1);
  entity_9[38-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_4 = 67;
  memcpy(entity_2, entity_9, 38*sizeof(char));
}