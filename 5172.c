void fun()
{
  int entity_1 = 14;
  char* entity_6;
  char entity_4[1] = "";
  entity_4 = NULL;
  char entity_9 = 'g';
  char* entity_3;
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[74-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_4, 'g', 1-1);
  entity_4[1-1]='';
  entity_1 = 43;
  memcpy(entity_3, entity_4, 1*sizeof(char));
}