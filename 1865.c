void fun()
{
  int entity_9 = 21;
  char entity_0[25] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'r', 25-1);
  entity_0[25-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  entity_9 = 15;
  memcpy(entity_4, entity_0, 25*sizeof(char));
}