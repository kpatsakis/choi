void fun()
{
  int entity_1 = 89;
  char* entity_9;
  char* entity_3;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memset(entity_4, 'B', entity_1-1);
  entity_4[entity_1-1]='';
  memcpy(entity_3, entity_4, entity_1*sizeof(char));
}