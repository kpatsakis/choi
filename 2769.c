void fun()
{
  int entity_6 = 58;
  int entity_9 = 96;
  char entity_7[74] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_1;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  memset(entity_7, 'R', 74-1);
  entity_7[74-1]='';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  memcpy(entity_3, entity_7, 74*sizeof(char));
}