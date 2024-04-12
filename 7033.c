void fun()
{
  int entity_9 = 21;
  entity_9 = 89;
  char* entity_8;
  char entity_3[74] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[15-1]='';
  memset(entity_3, 'A', 74-1);
  entity_3[74-1]='';
  memcpy(entity_8, entity_3, 74*sizeof(char));
}