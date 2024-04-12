void fun()
{
  int entity_8 = 28;
  entity_8 = 27;
  char entity_3 = 't';
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_0;
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_2, 'd', entity_8-1);
  entity_2[entity_8-1]='';
  memcpy(entity_1, entity_2, entity_8*sizeof(char));
}