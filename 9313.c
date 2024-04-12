void fun()
{
  int entity_5 = 89;
  entity_5 = 88;
  char* entity_2;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_4[91] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  memset(entity_3, 'r', entity_5-1);
  entity_3[entity_5-1]='';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[97-1]='';
  memset(entity_4, 'q', 91-1);
  entity_4[91-1]='';
  memcpy(entity_2, entity_3, entity_5*sizeof(char));
}