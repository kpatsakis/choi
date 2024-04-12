void fun()
{
  int entity_4 = 5;
  int entity_7 = 49;
  char entity_5[74] = "";
  entity_5 = NULL;
  char* entity_9;
  char* entity_8;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  memset(entity_5, 'i', 74-1);
  entity_5[74-1]='';
  memcpy(entity_9, entity_5, 74*sizeof(char));
}