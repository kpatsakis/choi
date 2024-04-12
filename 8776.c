void fun()
{
  int entity_1 = 72;
  int entity_5 = 56;
  char* entity_2;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  memset(entity_3, 'Q', entity_1-1);
  entity_3[entity_1-1]='';
  memcpy(entity_8, entity_3, entity_1*sizeof(char));
}