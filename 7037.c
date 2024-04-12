void fun()
{
  int entity_9 = 29;
  entity_9 = 74;
  char* entity_8;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_1 = 'o';
  entity_8 = (char*)malloc(27*sizeof(char));
  entity_8[27-1]='';
  memset(entity_3, 'z', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_8, entity_3, entity_9*sizeof(char));
}