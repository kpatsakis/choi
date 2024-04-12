void fun()
{
  int entity_6 = 24;
  char* entity_1;
  char* entity_5;
  char* entity_4;
  char entity_2[4] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', 4-1);
  entity_2[4-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[41-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  memcpy(entity_5, entity_2, 4*sizeof(char));
}