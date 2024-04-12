void fun()
{
  int entity_9 = 65;
  entity_9 = 51;
  char entity_6[74] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_6, 'a', 74-1);
  entity_6[74-1]='';
  memcpy(entity_8, entity_6, 74*sizeof(char));
}