void fun()
{
  int entity_4 = 96;
  int entity_2 = 18;
  int entity_3 = 10;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_6;
  char* entity_1;
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  memset(entity_7, 'd', entity_4-1);
  entity_7[entity_4-1]='';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  memcpy(entity_6, entity_7, entity_4*sizeof(char));
}