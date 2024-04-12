void fun()
{
  int entity_8 = 95;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_2;
  char* entity_3;
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[87-1]='';
  entity_2 = (char*)malloc(65*sizeof(char));
  entity_2[65-1]='';
  memset(entity_9, 'v', entity_8-1);
  entity_9[entity_8-1]='';
  memset(entity_4, 'N', 76-1);
  entity_4[76-1]='';
  memcpy(entity_3, entity_9, entity_8*sizeof(char));
}