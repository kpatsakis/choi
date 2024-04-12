void fun()
{
  int entity_3 = 8;
  int entity_2 = 66;
  char entity_9 = 'a';
  char* entity_4;
  char* entity_5;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  memset(entity_6, 'E', entity_3-1);
  entity_6[entity_3-1]='';
  entity_4 = (char*)malloc(61*sizeof(char));
  entity_4[61-1]='';
  entity_3 = 59;
  memcpy(entity_4, entity_6, entity_3*sizeof(char));
}