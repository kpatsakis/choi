void fun()
{
  int entity_4 = 40;
  char* entity_7;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[8-1]='';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  memset(entity_3, 'V', entity_4-1);
  entity_3[entity_4-1]='';
  entity_4 = 2;
  memcpy(entity_6, entity_3, entity_4*sizeof(char));
}