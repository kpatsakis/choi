void fun()
{
  int entity_9 = 48;
  char* entity_8;
  char entity_4[74] = "";
  entity_4 = NULL;
  char entity_2 = 'x';
  char entity_7 = 'z';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_4, 'P', 74-1);
  entity_4[74-1]='';
  memcpy(entity_8, entity_4, 74*sizeof(char));
}