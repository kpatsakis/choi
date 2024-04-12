void fun()
{
  int entity_6 = 52;
  entity_6 = 63;
  char* entity_4;
  char* entity_7;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(87*sizeof(char));
  entity_7[87-1]='';
  entity_4 = (char*)malloc(43*sizeof(char));
  entity_4[43-1]='';
  memset(entity_5, 'X', entity_6-1);
  entity_5[entity_6-1]='';
  memcpy(entity_4, entity_5, entity_6*sizeof(char));
}