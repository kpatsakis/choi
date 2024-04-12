void fun()
{
  int entity_3 = 18;
  char* entity_7;
  char* entity_4;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  memset(entity_6, 'v', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 79;
  memcpy(entity_7, entity_6, entity_3*sizeof(char));
}