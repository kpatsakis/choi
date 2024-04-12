void fun()
{
  int entity_7 = 35;
  int entity_5 = 81;
  entity_7 = 84;
  char* entity_1;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_2 = 'G';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  memset(entity_4, 's', entity_7-1);
  entity_4[entity_7-1]='';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}